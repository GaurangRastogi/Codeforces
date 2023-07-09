#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    int x,y;
    cin>>x>>y;

    int count=0;
    vector<int>ans;
    for(int i=y;i<=x;i++){
        ans.push_back(i);
    }

    for(int i=x-1;i>y;i--){
        ans.push_back(i);
    }

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
        solve();

   return 0;

}