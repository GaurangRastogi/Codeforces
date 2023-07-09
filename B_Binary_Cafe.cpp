#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k;
    cin>>n>>k;

    k=min(k,32ll);

    ll ind=0,sum=1;
    while(n>0){
        ll bit=n%2;
        if(bit){
            sum+=(1<<ind);
        }
        ind++;
        n/=2;
    }

    ll maxK=((1ll)<<k);

    cout<<min(maxK,sum)<<endl;
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