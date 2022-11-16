#include<bits/stdc++.h>
using namespace std;
long long int ans(long long int kmn,long long int flag){
    return ((kmn+flag)*(kmn+flag-1))/2;
}
void solve(){
   long long int n,m,flag=0;;
   cin>>n>>m;
   long long int kmn,kmx,temp,ans1=0,ans2=0;
   temp=n%m;
   kmn=n/m;
   for(long long int i=0;i<temp;i++){
       flag=1;
       ans1+=ans(kmn,flag);  
   }
   flag=0;
   for(long long int i=temp;i<m;i++){
       ans1+=ans(kmn,flag);
   }
   cout<<ans1<<" "<<((n-m+1)*(n-m))/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    solve();
    return 0;
}