#include<bits/stdc++.h>
using namespace std;
int solve(){
  int n,mn,count=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  mn=arr[1]-arr[0];
  for(int i=1;i<n;i++){
    mn=min(mn,arr[i]-arr[i-1]);
    if(arr[i]>mn) return i;
  }
  return n;
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