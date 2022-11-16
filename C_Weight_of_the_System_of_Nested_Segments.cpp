#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    return false;
}
void solve(){
    int n,m,x,y,sum=0;
    cin>>n>>m;
    vector<pair<int,int>>vp;
    unordered_map<int,int>um;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        vp.push_back({x,y});
        um[x]=i;
    }
    sort(vp.begin(),vp.end(),comparator);
    int temp=m-2*n;
    while(temp--){
        vp.pop_back();
    }
    sort(vp.begin(),vp.end());
    for(auto i:vp){
        sum+=i.second;
    }
    cout<<sum<<endl;
    int l=0,r=2*n-1;
    //for(auto i:vp)  cout<<i.first<<" "<<um[i.first]<<endl;
    while(l<r){
        cout<<um[vp[l].first]<<" "<<um[vp[r].first]<<endl;
        l++;
        r--;
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}