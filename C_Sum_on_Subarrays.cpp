#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,k,curr=0;
    cin>>n>>k;


    vector<ll>ans(n,-1);
    for(int i=1;i<=n;i++){
        if(i*(i+1)>2*k)
            break;
        curr=i;
    }

    for(int i=0;i<curr;i++){
        ans[i]=1;
    }


    ll left=k-((curr)*(curr+1))/2;


    ll temp=0;
    for(int i=1;i<=n;i++){
        if(i*(i+1)>2*left)
            break;
        temp=i;
    }
    
    ans[curr]=curr-temp-1;
    

    for(auto i:ans){
        cout<<i<<" ";
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