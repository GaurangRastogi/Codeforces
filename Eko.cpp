#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cutTree(vector<ll>&v,ll mid,ll m,ll n){
    
    ll sum=0;
    for(int i=0;i<n;i++){
        if(v[i]<mid)
            continue;
        else{
            sum+=v[i]-mid;
        }
    }
    // cout<<mid<<" "<<sum<<" "<<m<<endl;
    return sum>=m;
}
void solve(){
    ll n,m,sum=0,count=0;;
    cin>>n>>m;

    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    ll low=0,high=sum,mid;

    while(low+1<high){
        mid=(low+high)/2;
        if(cutTree(v,mid,m,n))
            low=mid;
        else    
            high=mid;
    }
    cout<<low<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}