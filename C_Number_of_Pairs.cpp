#include<bits/stdc++.h>
using namespace std;
long long solve(){
    int n,l,r,i=0;
    long long count=0;
    cin>>n>>l>>r;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        count+=upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
        count-=lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
        if(2*v[i]<=r&&2*v[i]>=l)    count--;
    }
    return count/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    
}