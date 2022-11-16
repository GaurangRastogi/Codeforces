#include<bits/stdc++.h>
using namespace std;
int two_pointer(int arr[],int n,int sum){
    int i=0,j=n-1,count=0;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            count++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>sum){
            j--;
        }
        else i++;
    }
    return count;
}
int solve(){
   int n,mx=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           mx=max(mx,two_pointer(arr,n,arr[i]+arr[j]));
       }
   }
   return mx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}