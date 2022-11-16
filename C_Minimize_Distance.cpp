#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,k,x;
    cin>>n>>k;
    ll distance=0;
    vector<ll>v1{},v2{};
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0) v1.push_back(x);
        else if(x>0)    v2.push_back(x);
    }
    int n1=v1.size(),n2=v2.size();
    sort(v1.begin(),v1.end(),greater<ll>());
    sort(v2.begin(),v2.end());
    if(n1>0){
        if(n1%k!=0){
            distance+=-2*v1[n1%k-1];
        }
        for(int i=n1%k+k-1;i<n1;i+=k){
            distance+=-2*v1[i];
        }
        distance+=v1[n1-1];
    }
    if(n2>0){
        if(n2%k!=0){
            distance+=2*v2[n2%k-1];
        }
        for(int i=n2%k+k-1;i<n2;i+=k){
            distance+=2*v2[i];
        }
        distance-=v2[n2-1];
    }
    if(n1>0&&n2>0){
        distance+=min(v2[n2-1],-1*v1[n1-1]);
    }
    return distance;
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