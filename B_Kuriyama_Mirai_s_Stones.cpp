#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   long long int arr[n], v[n], u[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       if(i>0)  v[i]=arr[i]+v[i-1];
       else v[i]=arr[i];
   }
   sort(arr,arr+n);
   u[0]=arr[0];
   for(int i=1;i<n;i++){
       u[i]=arr[i]+u[i-1];
   }
   int m,a,b,c;
   cin>>m;
   for(int i=0;i<m;i++){
       cin>>a>>b>>c;
       if(a==1){
           if((b-1)>0)  cout<<v[c-1]-v[b-2];
           else cout<<v[c-1]; 
       }
       else{
           if((b-1)>0)  cout<<u[c-1]-u[b-2];
           else cout<<u[c-1];
       }
       cout<<endl;
   }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}