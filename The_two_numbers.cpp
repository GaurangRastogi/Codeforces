#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(){
   ll n;
   cin>>n;
   if(n==2) return 0;
   else{
       if(n%4==0)   return (n/2-1)*(n/2+1)-1;
       else if(n%2==0)  return (n/2-2)*(n/2+2)-1;
       else return  n/2*(n/2+1)-1;
   }
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