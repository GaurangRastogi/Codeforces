#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
vector<vector<vector<ll>>>dp;
vector<ll>bestLen;
 
ll solve(vector<ll>&groups,ll i,ll j,ll extra){
    if(i>j)
        return 0;
    
    if(dp[i][j][extra]!=-1)
        return  dp[i][j][extra];
    

    //way 1 -> considering extra and current group size, and calculating price
    ll answer = bestLen[groups[i]+extra]+solve(groups,i+1,j,0);

    //iterating each next value 1/0 => equal to current group, solve mid portion
    for(int group=i+2;group<=j;group+=2){
        answer=max(answer, solve(groups, i+1, group-1,0)+ solve(groups,group,j,extra+groups[i]));
    }

    return dp[i][j][extra]=answer;
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;
    

    string s;
    cin>>s;
    
    vector<ll>cost(n+1);

    for(int i=1;i<=n;i++)
        cin>>cost[i];

    //initialize bestLen
    bestLen.resize(n+1,0ll);
    
    for(int i=1;i<=n;i++){
        for(int cut=1;cut<=i;cut++){
            bestLen[i]=max(bestLen[i],cost[cut]+bestLen[i-cut]);
        }
    }
    
    //make groups;
    vector<ll>groups;

    ll consecutive=0;
    for(int i=0;i<s.size();i++){
        if(i==0){
            consecutive++;
        }
        else{
            if(s[i]==s[i-1])
                consecutive++;

            else{
                groups.push_back(consecutive);
                consecutive=1;
            }
        }
    }
    groups.push_back(consecutive);
    //initialize best-len
    dp.resize(n+1,vector<vector<ll>>(n+1,vector<ll>(n+1,-1ll)));
    
    cout<<solve(groups,0,groups.size()-1,0);
    return 0;
}