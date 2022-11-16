#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<ll>>v1(n,vector<ll>(m,0)),v2(n,vector<ll>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>v1[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>v2[i][j];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v1[i][j]>=v2[i][j])
                continue;
            else    
                swap(v1[i][j],v2[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0){
                if(v1[i-1][j]>=v1[i][j]||v2[i-1][j]>=v2[i][j])
                    return 0;
            }
            if(j>0){
                if(v1[i][j-1]>=v1[i][j]||v2[i][j-1]>=v2[i][j])
                    return 0;
            }
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if(solve())
        cout<<"Possible";
    else    
        cout<<"Impossible";
    return 0;
}