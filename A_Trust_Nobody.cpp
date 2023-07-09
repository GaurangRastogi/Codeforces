#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


//analogy -> sort the array
// for every array find number of liars, which are telling 
//that there are greater liars, actually they are liars, count them
//if it is equal to current number then ans = current number
void solve(){
    ll n;
    cin>>n;

    vector<ll>liars(n);
    for(auto &it:liars){
        cin>>it;
    }

    sort(liars.begin(),liars.end());

    ll ans=-1;

    for(int i=0;i<=n;i++){
        ll val=upper_bound(liars.begin(),liars.end(),i)-liars.begin();
        
        // cout<<i<<" "<<val<<"  ";
        ll actualLiars=n-val;

        if(actualLiars==i)
            ans=i;
    }
    cout<<ans<<endl;
    return;
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
