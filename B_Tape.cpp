#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(n,0);
    vector<int>arr{};
    for(int i=0;i<n;i++)
        cin>>v[i];
  
    for(int i=0;i<n-1;i++){
        arr.push_back(v[i+1]-v[i]);
    }
      
    sort(arr.begin(),arr.end());
    int temp=n-k,ans=0;
    for(int i=0;i<temp;i++)
        ans+=arr[i];
    cout<<ans+k<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}