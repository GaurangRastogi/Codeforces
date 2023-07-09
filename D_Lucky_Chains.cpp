#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll N =1e7+5;
ll spf[N];

ll solve()
{
    ll x,y;
    cin>>x>>y;

    ll diff=y-x;

    if(diff==1)
        return -1;
    else if(__gcd(x, y)!=1)
        return 0;
    else if((x%2)==(y%2))
        return 1;

    else{
        vector<ll>fact;//log N factors
        ll ans=INT_MAX;
        while (diff>1)
        {
            fact.push_back(spf[diff]);
            ll temp=spf[diff];
            while(diff>1 && diff%temp==0) 
                diff/=temp;
        }

        for(auto val:fact){
            ans=min(ans,val-x%val);
        }
        return ans;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i=1;i<=N;i++){
        spf[i]=i;
    }

    for(int i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    ll n;
    cin>>n;
    while(n--){
        cout<<solve()<<endl;
    }
    return 0;
}