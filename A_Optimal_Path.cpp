#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=m;i++){
        sum+=i;
    }
    for(int j=2;j<=n;j++){
        sum+=m*j;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  
        cout<<solve()<<endl;
    return 0;
}