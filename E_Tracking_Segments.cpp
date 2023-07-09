#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class SGTree{
    vector<ll>seg;
    
    public:
    SGTree(ll n){
        seg.resize(4*n+1,0);
    }

    //query -> given l,r  and find minimum in the range

    ll query(ll ind,ll low,ll high,ll l,ll r){

        if(r<low||high<l)
            return 0ll;

        else if(low>=l &&high<=r)
            return seg[ind];

        else{
            ll mid=(low+high)/2;

            ll left=query(2*ind+1,low,mid,l,r);
            ll right=query(2*ind+2,mid+1,high,l,r);

            return left+right;
        }
    }


    void update(ll ind, ll low, ll high, ll i,ll val){

        if(low==high){
            seg[ind]=val;
            return;
        }
        ll mid=(low+high)/2;

        if(i<=mid)
            update(2*ind+1,low,mid,i,val);

        else
            update(2*ind+2,mid+1,high,i,val);

        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }

};



void solve(){
    ll n,m;
    cin>>n>>m;

    SGTree sgt(n);
    
    vector<pair<ll,ll>>vp(m);
    for(ll i=0;i<m;i++){
        cin>>vp[i].first>>vp[i].second;
        //0-indexed
        vp[i].second--;
        vp[i].first--;
    }

    ll q,val;
    cin>>q;
    
    vector<ll>query(q);
    for(int i=0;i<q;i++){
        cin>>val;
        query[i]=val-1;
    }


    //l=0 -> false always
    //h=n-> true always
    ll l=0,h=q-1,ans=-2;//so that -2 becomes -1
    while(l<=h){
        ll mid=(l+h)/2;

        for(int i=0;i<=mid;i++){
            sgt.update(0,0,n-1,query[i],1);
        }

        ll flag=false;
        for(int i=0;i<m;i++){
            ll one=sgt.query(0,0,n-1,vp[i].first,vp[i].second);
            
            ll zero=(vp[i].second-vp[i].first+1)-one;

            flag|=(one>zero);
            
        }

        if(flag){
            //true
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }


        for(int i=0;i<=mid;i++){
            sgt.update(0,0,n-1,query[i],0);
        }

    }
    cout<<ans+1<<endl;
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}