#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,val;
    cin >> n;

    vector<ll> arr;

    ll sum = 0;
    
    for(int i=0;i<n;i++){
        cin>>val;
        if(val!=0){
            arr.push_back(val);
        }
        sum+=abs(val);
    }

    if(arr.size()==0){
        cout<<sum<<" "<<0<<endl;
        return;
    }
    ll count=(arr[0]<0);

    for(int i=1;i<arr.size();i++){
        if(arr[i]<0&&arr[i-1]>0)
            count++;
    }
    cout<<sum<<" "<<count<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}