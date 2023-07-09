#include<bits/stdc++.h>
using namespace std;

double tsp(int fish,int fishMask,int n,int maskRange,vector<vector<double>>&prob,vector<vector<double>>&dp){
    //mark that fish as visited
    fishMask=(fishMask)&(~(1<<fish));

    if(fishMask==0)
        return 0;
    
    else if(dp[fish][fishMask]!=-1){
        return dp[i][fish];
    }

}
void solve(){
    int n;
    cin>>n;
    vector<vector<double>>prob(n,vector<double>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>prob[i][j];
        }
    }

    int maskRange=(1>>(n+1));
    vector<vector<double>>dp(n+1,vector<double>(maskRange,-1));

    
    for(int i=0;i<n;i++){

    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}