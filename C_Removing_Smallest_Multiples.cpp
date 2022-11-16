#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,ans=0;
    cin>>n;
    string str;
    cin>>str;
    vector<int>visited(n,0);

    for(int i=1;i<=n;i++){
        for(int j=i-1;j<n;j+=i){
            if(str[j]=='1')
                break;
            if(visited[j]==0){
                visited[j]=1;
                ans+=i;
            }
        }
    }

    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}


