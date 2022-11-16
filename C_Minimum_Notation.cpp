#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string str;
    cin>>str;
    int n=str.size(),curr=0;
    vector<int>v(10,-1);
    for(int i=0;i<n;i++){
        v[str[i]-'0']=i;
    }
    string ans="",temp="";
    for(int i=0;i<10;i++){
        // cout<<v[i]<<" ";
        if(v[i]==-1||curr>v[i])
            continue;
        for(int j=curr;j<=v[i];j++){
            if(str[j]==i+'0')
                ans+=str[j];
            else    
                temp+=str[j];
        }
        curr=v[i]+1;
    }
    // cout<<ans<<" "<<temp<<endl;
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        if(temp[i]=='9')
            ans+='9';
        else{
            ans+=temp[i]+1;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

