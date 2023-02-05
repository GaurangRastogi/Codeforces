#include<bits/stdc++.h>
using namespace std;
class SGTree{
    public:
    vector<int>seg;
    SGTree(int n){
        seg.resize(4*n+1);
    }

    //Building the segment tree
    void build(int ind,int low,int high,vector<int>&arr,int flag,int curr){

        if(low==high){
            seg[ind]=arr[low];
            return;
        }

        int mid=(low+high)/2;

        //recursively building left and right sgt
        build(2*ind+1,low,mid,arr,flag,curr+1);
        build(2*ind+2,mid+1,high,arr,flag,curr+1);

        //min -> when u need to find min range query
        //max-> when max range query
        //addition -> when sum range query
        if(flag==curr%2)
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];    
        else
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];    

    }
    
    //update -> given i,val => update value at arr[i]
    //update the segment tree also
    void update(int ind, int low, int high, int i,int val,int flag,int curr){
        //if low==high -> low=high=i &&seg[ind] 
        //also corresponds to arr[i]
        if(low==high){
            seg[ind]=val;
            return;
        }
        int mid=(low+high)/2;

        if(i<=mid)
            update(2*ind+1,low,mid,i,val,flag,curr+1);

        else
            update(2*ind+2,mid+1,high,i,val,flag,curr+1);

        //update the segment tree again
        //if max-> max, if sum then add both
        if(curr%2==flag)
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        else
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];
    }

};

void solve(){
    int n,m;
    cin>>n>>m;
    int len=pow(2,n);
    vector<int>arr(len);
    for(auto &it:arr){
        cin>>it;
    }
    SGTree sgt(4*len+1);
    int flag=n%2;
    sgt.build(0,0,len-1,arr,flag,1);

    int ind,val;
    while(m--){
        cin>>ind>>val;
        sgt.update(0,0,len-1,ind-1,val,flag,1);
        cout<<sgt.seg[0]<<endl;
    }
}
int main(){
    solve();
}