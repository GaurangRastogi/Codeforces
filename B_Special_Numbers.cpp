#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    long long int md=1e9+7,curr=1;
    cin>>n>>k;
    long long int sum=0;
    while(k>0){
        sum=(sum+(curr*(k%2))%md)%md;
        k/=2;
        curr*=n;
        curr%=md;
        sum%=md;
    }
    cout<<sum%md<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}