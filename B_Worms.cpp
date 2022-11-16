#include<bits/stdc++.h>
using namespace std;
int b_search(vector<int>&nums,int val,int n){
    int l=0,h=n-1,m;
    while(l<h){
        m=l+(h-l)/2;
        if(nums[m]==val)    return m;
        else if(nums[m]>val)    h=m;
        else l=m+1;
    }
    return h;
}
void solve(){
    int n;
    int x=0;
    cin>>n;
    int arr[n];
    vector<int>nums(n,0);
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        x+=arr[i];
        nums[i]=x;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<b_search(nums,x,n)+1<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}