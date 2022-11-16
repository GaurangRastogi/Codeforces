#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,c,x;
    cin>>n>>c;
    map<int,int>mp{};
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int cost=0;
    for(auto i:mp){
        cost+=min(i.second,c);
    }
    cout<<cost<<endl;
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

