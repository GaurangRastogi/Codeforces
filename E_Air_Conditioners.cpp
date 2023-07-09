#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>ind(k+1),t(k+1);

    for(int i=1;i<=k;i++){
        cin>>ind[i];
    }

    for(int i=1;i<=k;i++){
        cin>>t[i];
    }

    vector<ll>arr(n+1,INT_MAX);

    for(int i=1;i<=k;i++){
        arr[ind[i]]=t[i];
    } 

    ll mn=INT_MAX;
    for(int i=1;i<=n;i++){
        mn=min(mn,arr[i]);
        
        arr[i]=mn;
        mn++;
    }

    mn=INT_MAX;
    for(int i=n;i>0;i--){
        mn=min(mn,arr[i]);

        arr[i]=mn;
        mn++;
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}