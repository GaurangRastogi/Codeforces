#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n,m;
bool dfs(vector<vector<char>>&grid,ll i,ll j){
    cout<<i<<" "<<j<<endl;
    if(i>=n||i<0||j>=m||j<0)
        return true;
    else if(grid[i][j]=='.'){
        grid[i][j]='#';
        return true;
    }
    else if(grid[i][j]=='#'){
        return true;
    }
    else if(grid[i][j]=='G'){
        return false;
    }
    else{
        //grid[i][j]='B'
        return dfs(grid,i+1,j)&dfs(grid,i,j+1);
    }
}
void solve(){
    cin>>n>>m;

    vector<vector<char>>grid(n,vector<char>(m,'\0'));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='B'){
                flag&=dfs(grid,i,j);
            }
        }
    }
    cout<<flag<<endl;

    if(!flag){
        cout<<"No"<<endl;
        return;
    }

    //check if all A can reach home or not

    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}