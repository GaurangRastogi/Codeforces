#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   int arr[n];
   map<int,int>mp;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       mp[arr[i]]++;
   } 
   int curr=0;
   int a=-1,b=-1;
   while(a==-1){
       if(mp[curr]==0){
           a=curr;
           curr=0;
       }
       else{
           mp[curr]--;
           curr++;
       }
   }
   while(b==-1){
       if(mp[curr]==0){
           b=curr;
       }
       else{
           mp[curr]--;
           curr++;
       }
   }
   cout<<a+b<<endl;
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