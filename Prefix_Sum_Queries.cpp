#include<bits/stdc++.h>
using namespace std;

class SgTree{
    vector<int>seg1,seg2,lazy;

    public:

    SgTree(int n){
        seg1.resize(4*n);
        seg2.resize(4*n);

        lazy.resize(4*n,0);
    }


    void build(int ind,int low,int high,vector<int>&arr,vector<int>&arr2){

        if(low==high){
            seg1[ind]=arr2[low];
            seg2[ind]=arr[low];
            return;
        }

        int mid=(low+high)/2;

        build(2*ind+1,low,mid,arr,arr2);
        build(2*ind+2,mid+1,high,arr,arr2);

        seg1[ind]=seg1[2*ind+1]+seg1[2*ind+2];
        seg2[ind]=max(seg2[2*ind+1],seg2[2*ind+2]);
    }


    void update(int ind,int low,int high,int l,int r,int val){

        if(lazy[ind]!=0){
            // seg1[ind]+=lazy[ind];
            seg2[ind]+=lazy[ind];


            if(low!=high){
                lazy[2*ind+1]+=lazy[ind];
                lazy[2*ind+2]+=lazy[ind];
            }

            lazy[ind]=0;
        }

        
        if(high<l || r<low){
            return;
        }

        else if(low>=l&&high<=r){
            // seg1[ind]+=val;
            seg2[ind]+=val;

            if(low!=high){
                lazy[2*ind+1]+=val;
                lazy[2*ind+2]+=val;
            }
            return;
        }

        else{
            int mid=(low+high)/2;
            update(2*ind+1,low,mid,l,r,val);
            update(2*ind+2,mid+1,high,l,r,val);


            seg1[ind]=seg1[2*ind+1]+seg1[2*ind+2];
            seg2[ind]=min(seg2[2*ind+1],seg2[2*ind+2]);

            return;
        }
    }

    int query_max(int ind,int low,int high,int l,int r){

        if(lazy[ind]!=0){
            // seg1[ind]+=lazy[ind];
            seg2[ind]+=lazy[ind];


            if(low!=high){
                lazy[2*ind+1]+=lazy[ind];
                lazy[2*ind+2]+=lazy[ind];
            }

            lazy[ind]=0;
        }


        if(high<l || r<low){
            return INT_MIN;
        }

        if(low>=l&&high<=r){
            return seg2[ind];
        }


        int mid=(low+high)/2;
        int left=query_max(2*ind+1,low,mid,l,r);
        int right=query_max(2*ind+2,mid+1,high,l,r);

        return max(left,right);

    }
    int query_sum(int ind,int low,int high,int l,int r){

        if(lazy[ind]!=0){
            // seg1[ind]+=lazy[ind];
            seg2[ind]+=lazy[ind];


            if(low!=high){
                lazy[2*ind+1]+=lazy[ind];
                lazy[2*ind+2]+=lazy[ind];
            }

            lazy[ind]=0;
        }


        if(high<l || r<low){
            return 0;
        }

        if(low>=l&&high<=r){
            return seg1[ind];
        }


        int mid=(low+high)/2;
        int left=query_sum(2*ind+1,low,mid,l,r);
        int right=query_sum(2*ind+2,mid+1,high,l,r);

        return left+right;

    }
};


int main(){

    int n,q,type,ind,val,l,r;
    cin>>n>>q;
    
    vector<int>arr(n);
    for(auto &it:arr)
        cin>>it;

    
    vector<int>prefix(n);
    prefix[0]=arr[0];

    for(int i=1;i<n;i++){
        prefix[i]=arr[i]+prefix[i-1];
    }
    SgTree sgt(n);
    sgt.build(0,0,n-1,prefix,arr);

    for(int i=0;i<q;i++){
        cin>>type;

        if(type==1){
            cin>>ind>>val;
            sgt.update(0,0,n-1,ind,n-1,val-arr[ind]);
            arr[ind]=val;
        }
        else{
            cin>>l>>r;
            l--;
            r--;
            int ans=sgt.query_max(0,0,n-1,l,r);
            int padding=sgt.query_sum(0,0,n-1,0,l);

            // cout<<ans<<" "<<padding<<" "<<arr[l]<<endl;

            cout<<ans-padding+arr[l]<<endl;
        }
    }
}