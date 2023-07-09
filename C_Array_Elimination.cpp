#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,val;
    cin>>n;

    vector<ll>bit_count(31);
    for(int i=0;i<n;i++){
        cin>>val;
        for(int j=0;j<=30;j++){
            bit_count[j]+=val%2;
            val/=2;
        }
    }
    
    vector<ll>ans{};
    for(int i=1;i<=n;i++){
        ll flag=1;
        for(int j=0;j<=30;j++){
            if(bit_count[j]%i!=0){
                flag=0;
                break;
            }
        }
        if(flag)
            ans.push_back(i);
    }

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