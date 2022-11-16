#include<bits/stdc++.h>
using namespace std;
int solve(){
  int n,x,flag;
  cin>>n;
  unordered_map<int,int>um;
  for(int i=0;i<n;i++){
      cin>>x;
      um[x]++;
  }
  flag=um[2]%2;
  int count=um[4]+(int)(um[2]/2);
  if(um[1]>um[3]){
      count+=um[3];
      um[1]-=um[3];
      count+=(int)(um[1]/4);
      um[1]%=4;
      if(flag==1&&um[1]<=2) count++;
      else if(um[1]>2&&flag==1) count+=2;   
      else if(um[1]!=0) count++;
  }
  else{
      count+=um[1];
      um[3]-=um[1];
      count+=um[3]+flag;
  }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
}