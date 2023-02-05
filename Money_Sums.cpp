#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(auto &i:arr)
        cin>>i;
    
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<=n+2;i++){
        cout<<dp[i][0]/0;
    }
    return 0;
}