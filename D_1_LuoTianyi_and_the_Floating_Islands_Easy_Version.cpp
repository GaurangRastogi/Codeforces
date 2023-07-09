#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

// x^y % mod
ull power(ll x, ll y, ll p=mod){
    ull res=1;

    x=x%p;

    while(y>0){
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res%p;
}

//can also use extended eucilidean algorithm
//but using fermat litte's theorem
ull modInverse(ll n, ll p=mod){
    return power(n,p-2,p);
}

vector<ll>fac;
ull nCr(ll n, ll r, ll p=mod){
    
    if(n<r){
        return 0;
    }

    if(r==0)
        return 1;
    
    return (fac[n]*modInverse(fac[r],p)%p * modInverse(fac[n-r],p)%p)%p;
}

// ------- Math Utilities Ends --------- //
ll ans;
ll dfs(ll node,vector<vector<ll>>&graph,ll n,ll k,ll parent=-1){
    ll childCount=0,bad=0;

    for(auto &child:graph[node]){
        if(child==parent){
            continue;
        }
        ll subAns=dfs(child,graph,n,k,node);
        childCount+=subAns;
        if(subAns>=k){
            bad+=nCr(subAns,k);
            bad%=mod;
        }
    }



    ll parentCount=n-childCount-1;
    if(parentCount>=k)
        bad+=nCr(parentCount,k);
    bad%=mod;
    ll total=nCr(n,k);
    ll good=(total%mod - bad%mod +mod)%mod;
    ans+=good;
    ans%=mod;
    childCount+=1;
    return childCount;
}

void solve(){

    
    ll n,k;
    cin>>n>>k;

    vector<vector<ll>>graph(n,vector<ll>{});

    ll u,v;

    vector<ll>indegree(n,0);
    for(ll i=1;i<n;i++){
        cin>>u>>v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
        indegree[v-1]++;
        indegree[u-1]++;
    }

    if(k==1||k==3){
        cout<<1<<endl;
        return;
    }

    //calculating any one of leaf node
    ll leaf=-1;
    for(ll i=0;i<n;i++){
        if(indegree[i]==1){
            leaf=i;
            break;
        }
    }

    dfs(leaf,graph,n,k,-1);

    ll res=(ans*modInverse(nCr(n,k)));
    res%=mod;
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ans=0;
    fac.assign(200005,0);
    fac[0] = 1;
    for (ll i = 1; i <= 2e5+4; i++)
        fac[i] = (fac[i - 1] * i) % mod;

    solve();
    return 0;
}
