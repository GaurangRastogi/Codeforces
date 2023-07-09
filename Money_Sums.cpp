#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(auto &it:arr)
        cin>>it;
    

    vector<int>dp(1e5+5,0);
    dp[0]=1;
    for(int j=0;j<n;j++){
    
        //starting from back only, since it other-wise it'll always be true
        for(int i=1e5;i>0;i--){
            if(arr[j]<=i)
                dp[i]=dp[i]|dp[i-arr[j]];//since only presence is needed
        }
    }

    vector<int>ans;
    int sum=0;
    for(int i=1;i<=1e5;i++){
        if(dp[i]!=0){
            ans.push_back(i);
        }
    }

    cout<<ans.size()<<endl;

    for(auto val:ans)
        cout<<val<<" ";
    return 0;
}