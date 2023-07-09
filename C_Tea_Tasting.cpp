#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin>>n;

    vector<ll>a(n),b(n),prefix(n,0);

    for(auto &it:a)
        cin>>it;

    for(auto &it:b)
        cin>>it;

    prefix[0]=b[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+b[i];
    }


    vector<ll>ans(n),freq(n+1,0),rem(n+1,0);

    for(ll i=0;i<n;i++){
        ll val=a[i];

        //offset prefix[i-1]
        if(i>0)  
            val+=prefix[i-1];
        
        ll ind=upper_bound(prefix.begin(),prefix.end(),val)-prefix.begin();
        //since from ind, only not valid
        freq[ind]++;

        //exceptions to be added
        int rm=val;
        if(ind>0){
            rm-=prefix[ind-1];
        }
        rem[ind]+=rm;

    }

    //prefix sum for freq

    for(int i=1;i<n;i++)
        freq[i]+=freq[i-1];
    

    for(int i=0;i<n;i++){
        ans[i]=(i+1-freq[i])*b[i]+rem[i];
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}