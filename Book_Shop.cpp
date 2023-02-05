#include <iostream>
#include<vector>
using namespace std;
int mod =1e9+7;

int main(){
    int n,amt;
    cin>>n>>amt;
    
    vector<int>price(n,0),pages(n,0);
    
    for(int i=0;i<n;i++)
        cin>>price[i];
    
    for(int i=0;i<n;i++)
        cin>>pages[i];

    vector<vector<int>>dp(n+1,vector<int>(amt+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=amt;j++){
            if(price[i-1]<=j)
                dp[i][j]=max(dp[i-1][j],pages[i-1]+dp[i-1][j-price[i-1]]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][amt];
    return 0;
}