#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
   int n;
   cin>>n;
   cout<<'1';
   for(int i=2;i<n;i++) cout<<'0';
   cout<<'1'<<endl;
   return;
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