#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;

// https://cses.fi/problemset/result/6211996/

class SGTree{
    vector<ll>seg;

    public:

    SGTree(ll n){
        seg.resize(4*n+1);
    }


    void build(ll ind,ll low,ll high,vector<ll>&arr){

            if(low==high){
                seg[ind]=arr[low];
                return;
            }

            ll mid=(low+high)/2;

            build(2*ind+1,low,mid,arr);
            build(2*ind+2,mid+1,high,arr);

            seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
    }

    ll query(ll ind,ll l,ll r,ll val){
        if(l==r)
            return l;
        else{

            int mid=(l+r)/2;

            if(seg[2*ind+1]>=val){
                return query(2*ind+1,l,mid,val);
            }
            else{
                return query(2*ind+2,mid+1,r,val);
            }
        }
    }

    void update(ll ind,ll low,ll high,ll i,ll val){

        if(low==high){
            seg[ind]=val;
            return;
        }
        else{
            ll mid=(low+high)/2;
            if(i<=mid){
                update(2*ind+1,low,mid,i,val);
            }
            else{
                update(2*ind+2,mid+1,high,i,val);
            }

            seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
        }

    }
    

    ll getFirst(){
        return seg[0];
    }

};


int main(){
    ll n,q;
    cin>>n>>q;

    vector<ll>arr(n);

    for(auto &it:arr)
        cin>>it;

    
    SGTree sgt(n);
    sgt.build(0,0,n-1,arr);

    ll rooms;
    for(int i=0;i<q;i++){
        cin>>rooms;
        if(sgt.getFirst()<rooms)
            cout<<"0 ";
        else{
            ll index_ans=sgt.query(0,0,n-1,rooms);
            cout<<index_ans+1<<" ";
            arr[index_ans]-=rooms;
            sgt.update(0,0,n-1,index_ans,arr[index_ans]);
        }
    }
    return 0;
}