#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;


    ll sumx=0,sumy=0;
    vector<ll>vx(n),vy(n);
    for(int i=0;i<n;i++){
        cin>>vx[i]>>vy[i];
    }

    sort(vx.begin(),vx.end());
    sort(vy.begin(),vy.end());

    if(n%2){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<(vx[n/2]-vx[n/2-1]+1)*(vy[n/2]-vy[n/2-1]+1)<<endl;
        return;
    }
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
