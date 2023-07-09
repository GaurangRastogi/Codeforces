#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<ll>fin;
    fin.push_back(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            fin.push_back(arr[i]);
        }
    }

    if(fin.size()<=1){
        cout<<1<<endl;
        return;
    }

    // for(auto i:fin){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    ll ans=2,len=fin.size()-1;
    for(int i=1;i<len;i++){
        if((fin[i-1]>fin[i]&&fin[i+1]>fin[i])||(fin[i+1]<fin[i]&&fin[i-1]<fin[i])){
            // cout<<i<<endl;
            ans++;
        }
    }
    cout<<ans<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}