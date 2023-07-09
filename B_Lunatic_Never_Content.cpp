#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);

    for(auto &it:arr){
        cin>>it;
    }

    set<ll>diff;
    ll l=0,h=n-1;
    while(l<=h){
        ll temp=abs(arr[h--]-arr[l++]);
        if(temp)
            diff.insert(temp);
    }

    if(diff.size()==0){
        cout<<0<<endl;
    }
    else{
        ll val=*diff.begin();
        diff.erase(diff.begin());

        for(auto x:diff){
            val=__gcd(val,x);
        }
        cout<<val<<endl;
    }

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
