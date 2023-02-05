#include<bits/stdc++.h>
using namespace std; 
class SGTree{
    vector<vector<int>>seg;
    vector<int>left,right;
 
    public:
    SGTree(int n){
        seg.resize(4*n+1,vector<int>(3));
        left.resize(3);
        right.resize(3);
    }
 
    //Building the segment tree
    void build(int ind,int low,int high,string &arr){
 
        if(low==high){
            if(arr[low]=='(')
                seg[ind]={1,0,0};
            else
                seg[ind]={0,1,0};
            return;
        }
 
        int mid=(low+high)/2;
 
        //recursively building left and right sgt
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
 
        //min -> when u need to find min range query
        //max-> when max range query
        //addition -> when sum range query
       
        int full=min(seg[2*ind+1][0],seg[2*ind+2][1]);    
        seg[ind][2]=seg[2*ind+1][2]+seg[2*ind+2][2]+full;
        seg[ind][0]=seg[2*ind+1][0]+seg[2*ind+2][0]-full;
        seg[ind][1]=seg[2*ind+1][1]+seg[2*ind+2][1]-full;
    }
     
 
    //query -> given l,r  and find minimum in the range
 
    vector<int> query(int ind,int low,int high,int l,int r){
 
        //no overlap
        //l r low high or low high l r
        cout<<low<<" "<<high<<endl<<endl;
        if(r<low||high<l)
            return {0,0,0};
 
        else if(low>=l &&high<=r)
            return seg[ind];
 
        else{
            int mid=(low+high)/2;
 
            left=query(2*ind+1,low,mid,l,r);
            right=query(2*ind+2,mid+1,high,l,r);
 
            //max-range query (max(left,right))
            //sum-range query left+right
            vector<int>ans(3);
            int full=min(left[0],right[1]);    
            ans[2]=left[2]+right[2]+full;
            ans[0]=left[0]+right[0]-full;
            ans[1]=left[1]+right[1]-full;
            cout<<low<<" "<<high<<endl;
            cout<<left[0]<<" "<<left[1]<<" "<<left[2]<<endl;
            cout<<right[0]<<"  "<<right[1]<<" "<<right[2]<<endl;
            cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
            cout<<endl;
            return ans;
        }
    }
 
};
 
void solve(){
    string str;
    cin>>str;
    int n=str.size();
 
    SGTree sgt(4*n+1);
    sgt.build(0,0,n-1,str);
 
    int q,l,r;
    cin>>q;
 
    while(q--){
        cin>>l>>r;
        cout<<2*sgt.query(0,0,n-1,l-1,r-1)[2]<<endl;
        // cout<<2*ans[2]<<endl;
    }
}
 
 
int main(){
    solve();
}