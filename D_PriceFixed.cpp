#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comparator(pair<ll,ll>&p1,pair<ll,ll>&p2){
    return p1.second<p2.second;
}

bool possible(vector<pair<ll,ll>>arr,ll toBuy,ll alreadyBought){

    for(auto pr:arr){
        // cout<<pr.second<<" "<<alreadyBought<<endl;
        if(pr.second<=alreadyBought){
            toBuy-=pr.first;
            if(toBuy<=0)
                return true;
            alreadyBought+=pr.first;
        }
        else{
            return false;
        }
    }
    // cout<<"wow"<<endl;
    return true;
}

void solve(){
    ll n;
    cin>>n;

    vector<pair<ll,ll>>vp(n);

    ll sum=0;
    for(auto &it:vp){
        cin>>it.first>>it.second;
        sum+=it.first;
    }

    sort(vp.begin(),vp.end(),comparator);



    //l=> no of buys of one rupee
    ll l=0,h=sum+1;
    while(l+1<h){
        ll mid=(l+h)/2;

        ll buysOf2=sum-mid; // no of buys of 2 rubles
        // cout<<mid<<" "<<buysOf2<<endl;
        if(possible(vp,mid,buysOf2)){
            l=mid;
        }
        else{
            h=mid;
        }
    }

    cout<<l+(sum-l)*2ll<<endl;
    return;
}
int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}