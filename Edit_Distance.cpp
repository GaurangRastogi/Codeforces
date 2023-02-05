#include<iostream>
#include<vector>

using namespace std;
int main(){

    string str1,str2;
    cin>>str1>>str2;
    
    int n,m;
    n=str1.size();
    m=str2.size();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0)
                dp[i][j]=j;
            if(j==0)
                dp[i][j]=i;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else{  
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
        }
    }
   

    cout<<dp[n][m];
    return 0;

}