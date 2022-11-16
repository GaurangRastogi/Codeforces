#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,m,count=0,mx=0,temp=0;
    cin>>n>>m;
    vector<string>v(n,"");
    for(int i=0;i<n;i++){
            cin>>v[i];
            for(int j=0;j<v[i].size();j++)
                temp+=(v[i][j]-'0');
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            count=(v[i][j]-'0');
            count+=(v[i+1][j+1]-'0');
            count+=(v[i][j+1]-'0');
            count+=(v[i+1][j]-'0');

            mx=max(mx,4-count);
            //cout<<i<<" "<<j<<" "<<count<<endl;
        }
    }

    if(mx>=2)
        return temp;
    else if(mx==1)
        return temp-1;
    else
        return temp-2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}


