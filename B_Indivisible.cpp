#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(){
   ll n;
   cin>>n;
   if(n==1){
        cout<<1<<endl;
   }
   else if(n%2){
    cout<<-1<<endl;
   }
   else{
      ll ev=2,odd=1,i=0;
      while(i<n/2){
        cout<<ev<<" "<<odd<<" ";
        i++;
        ev+=2;
        odd+=2;
      }
      cout<<endl;
   }
   return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    cout.flush();
    return 0;
}