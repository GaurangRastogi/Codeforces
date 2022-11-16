#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll flag=0;
void solve2(vector<ll>&v,vector<ll>&ans,ll val){
   //cout<<val<<" ";
   if(val==0){
        ans[0]=0;
        return;
   }
   if(val==-1)
        return;

   ll lb=lower_bound(v.begin(),v.end(),val)-v.begin();
   
   ll l=v[lb]-val,h=val;
   //cout<<v[lb]-val<<" l"<<endl;
   while(l<=h){
        ans[l]=h;
        ans[h]=l;
        l++;
        h--;
   }
   solve2(v,ans,v[lb]-val-1);
}
void solve(){
    ll n;
    cin>>n;
    ll temp=2*n;
    vector<ll>v{};
    v.push_back(0);
    for(int i=1;i<n;i++){
        if(i*i<=temp)
            v.push_back(i*i);
        else 
            break;
    }
    vector<ll>ans(n,-1);
    solve2(v,ans,n-1);
    if(flag==1){
        cout<<-1<<endl;
        return;
    }
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;

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


//  if(n==0){
//         flag=1;
//         return;
//     }
//     if(n==-1)
//         return;
//     ll lb=lower_bound(v.begin(),v.end(),n)-v.begin();
//     ll l=v[lb]-n,h=n;
//     //cout<<l<<h<<" lb\n";
//     while(l<=h){
//         ans[l]=h;
//         ans[h]=l;
//         l++;
//         h--;
//     }
//     solve2(v,ans,v[lb]-1);