#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v1{},v2{};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,q,x1,y1,x2,y2;
    cin>>n>>m>>q;
    ll val=__gcd(n,m);
    ll t[3];
    t[1]=n/val;
    t[2]=m/val;
    for(int i=0;i<q;i++){
        cin>>x1>>y1>>x2>>y2;
        if((y1-1)/t[x1]==(y2-1)/t[x2])
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}