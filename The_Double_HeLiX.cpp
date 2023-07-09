#include<bits/stdc++.h>
using namespace std;

int func(pair<int,int>&p1,pair<int,int>&p2,vector<int>&v1,vector<int>&v2){
    
  int st1=p1.first,st2=p1.second,end1=p2.first,end2=p2.second;

  // cout<<st1<<" "<<end1<<endl;
  // cout<<st2<<" "<<end2<<endl<<endl;
  int val1=0,val2=0;

  for(int i=st1+1;i<=end1;i++){
    val1+=v1[i];
  }

  for(int i=st2+1;i<=end2;i++){
    val2+=v2[i];
  }

  return max(val1,val2);

}

void solve(){

  int n,m;
  cin>>n;
  if(n==0)
    return;
  vector<int>v1(n);
  
  for(int i=0;i<n;i++)
    cin>>v1[i];
  
  cin>>m;
  vector<int>v2(m);
  for(int i=0;i<m;i++){
    cin>>v2[i];
  }

  map<int,int>um;
  for(auto it:v1)
    um[it]++;

  for(auto it:v2)
    um[it]++;

  vector<pair<int,int>>vp;
  vp.push_back({-1,-1});

  for(auto it:um){
    if(it.second==2){
      // cout<<it.first<<" ";
      int ind1=lower_bound(v1.begin(),v1.end(),it.first)-v1.begin();
      int ind2=lower_bound(v2.begin(),v2.end(),it.first)-v2.begin();
      // cout<<v1[ind1]<<" "<<v2[ind2]<<endl;
      vp.push_back({ind1,ind2});
    }
  }
  vp.push_back({n-1,m-1});
  int sum=0;
  for(int i=0;i<vp.size()-1;i++){
    sum+=func(vp[i],vp[i+1],v1,v2);
  }

  cout<<sum<<endl;

  solve();


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    solve();
    return 0;
}