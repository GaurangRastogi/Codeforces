#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){

    ll n,k;
    cin>>n>>k;

    ll ans=0,val;
    vector<ll>remainder;

    for(int i=0;i<n;i++){
        cin>>val;
        ans+=val/k;

        remainder.push_back(val%k);
    }

    sort(remainder.begin(),remainder.end());

    ll l=0,h=remainder.size()-1;

    // for(auto rem:remainder)
    //     cout<<rem<<"  ";
    // cout<<endl;
    while(l<h){
        // cout<<l<<" "<<h<<" "<<ans<<"\t";
        if(remainder[l]+remainder[h]>=k){
            l++;
            h--;
            ans++;
        }
        else{
            l++;
        }
        // cout<<l<<" "<<h<<" "<<ans<<endl;
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