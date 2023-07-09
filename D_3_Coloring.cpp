#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll color=2;

//solution watched

//color => according to chess
//in chess, we can color using B and W
//here we need to color using three, while one is blocked
void solve(){
    ll n,Black=0,White=1;
    cin>>n;

    vector<pair<ll,ll>>mat[color];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            mat[(i+j)%2].push_back({i,j});
        }
    }

    ll a,b,i,j,colorVal;
    for(ll ind=1;ind<=n*n;ind++){
        cin>>a;


        if(a==1){
            if(mat[Black].size()){
                colorVal=Black;
                b=2;
            }
            else{
                colorVal=White;
                b=3;
            }
        }

        else if(a==2){
            if(mat[White].size()){
                colorVal=White;
                b=1;
            }
            else{
                colorVal=Black;
                b=3;
            }
        }
        else{
            if(mat[White].size()){
                colorVal=White;
                b=1;
            }
            else{
                colorVal=Black;
                b=2;
            }
        }

        i=mat[colorVal].back().first;
        j=mat[colorVal].back().second;
        mat[colorVal].pop_back();
        cout<<b<<" "<<i<<" "<<j<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    cout.flush();
    return 0;
}
