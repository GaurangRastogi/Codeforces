#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(auto &it:arr)
        cin>>it;
    
    set<ll>even,odd;

    for(auto i:arr){
        if(i%2)
            odd.insert(i);
        else
            even.insert(i);
    }   

    
    if(odd.size()==0||even.size()==0){
        cout<<"YES"<<endl;
        return;
    }

    int o=*odd.begin(),e=*even.begin();

    if(o<e){
    cout<<"YES"<<endl;
    return;

    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    

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