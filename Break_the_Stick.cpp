#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(){
   ll x,y;
   cin>>x>>y;
   if(x%2==0){
       return "YES";
   }
   else{
       if(y%2==1)   return "YES";
   }
   return "NO";
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