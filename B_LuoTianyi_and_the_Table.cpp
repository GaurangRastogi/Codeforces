#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m;
    cin>>n>>m;

    ll len=n*m;
    vector<ll>v(len);
    for(int i=0;i<len;i++)
        cin>>v[i];

    sort(v.begin(),v.end());
    
    ll neg1=v[0],neg2=v[1];
    ll pos1=v[len-1],pos2=v[len-2];


    ll lesser=min(n,m)-1,greater=n*m-lesser-1;

    //1 -> pos, 2-> neg
    ll sum1=(pos1-neg2)*(lesser)+(pos1-neg1)*greater;
    //1 ->neg 2-> pos
    ll sum2=(pos2-neg1)*(lesser)+(pos1-neg1)*greater;;

    cout<<max(sum1,sum2)<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
