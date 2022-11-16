#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
   int x,y,z,a;
    cin>>x>>y>>z;
    map<int,int>um;
    for(int i=1;i<=x+y+z;i++){
        cin>>a;
        um[a]++;
    }
    int count=0;
    for(auto i:um){
        if(i.second>=2) count++;
    }
    cout<<count<<endl;
    for(auto i:um){
        if(i.second>=2) cout<<i.first<<endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)  cout<<solve()<<endl;
    // return 0;
    solve();
}