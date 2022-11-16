#include<bits/stdc++.h>
using namespace std;
long long int solve(){
    int n;
    cin>>n;
    int flag,mxpos,mxneg;
    int arr[n];
    vector<long long int>ans;
    cin>>arr[0];
    if(arr[0]<0){
        flag=0;
        mxneg=arr[0];
        mxpos=0;
    }  
    else{
        flag=1;
        mxneg=-1e9;
        mxpos=arr[0];
    }
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(flag==1){
            if(arr[i]>0)
                mxpos=max(mxpos,arr[i]);
            else{
                ans.push_back(mxpos);
                mxneg=arr[i];
                flag=0;
            }
        }
        else{
            if(arr[i]<0) mxneg=max(mxneg,arr[i]);
            else{
                ans.push_back(mxneg);
                mxpos=arr[i];
                flag=1;
            }
        } 
    }
    if(flag==1) ans.push_back(mxpos);
    else ans.push_back(mxneg);
    long long int sum=0;
    for(int i=0;i<ans.size();i++){
        sum+=(long long int)ans[i];
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}