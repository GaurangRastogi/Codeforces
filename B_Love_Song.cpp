#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,q,a,b,sum=0;
    cin>>n>>q;
    string str;
    cin>>str;
    vector<vector<int>>mat(n,vector<int>(26,0));
    mat[0][str[0]-'a']++;
    // for(int i=0;i<26;i++)
    //     cout<<mat[0][i]<<" ";
    // cout<<endl;
    for(int i=1;i<n;i++){
        mat[i][str[i]-'a']++;
        for(int j=0;j<26;j++){
            mat[i][j]+=mat[i-1][j];
            //cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
    }
    for(int i=0;i<q;i++){
        cin>>a>>b;
        sum=0;
        vector<int>ans(26,0);
        if(a==1){
            for(int i=0;i<26;i++)
                ans[i]=mat[b-1][i];
        }
        else{
            for(int i=0;i<26;i++){
                ans[i]=mat[b-1][i]-mat[a-2][i];
            }
        }
        for(int i=0;i<26;i++){
            //cout<<ans[i]<<endl;
            sum+=ans[i]*(i+1);
        }
        cout<<sum<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}