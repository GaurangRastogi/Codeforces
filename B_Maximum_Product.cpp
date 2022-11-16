#include<bits/stdc++.h>
using namespace std;
void solve(){
   long long int n;
   cin>>n;
   long long int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   sort(arr,arr+n);
   long long int a,b,c,d,e;
   a=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
   b=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
   c=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
   cout<<max(a,max(b,c))<<endl;
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