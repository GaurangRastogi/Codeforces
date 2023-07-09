#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,x;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1)
            cout<<x<<" ";
        else
            v.push_back(x);

    }

    if(v.size()==2&&((v[0]==2&&v[1]==3)||(v[0]==3&&v[1]==2))){
        cout<<"2 3"<<endl;
        return;
    }
    
    sort(v.begin(),v.end(),greater<int>());

    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}