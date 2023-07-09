#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,toSwap=0;
    cin>>n;
    string str;
    cin>>str;

    for(int i=0;i<n;i++){
        if(str[i]<=str[toSwap]){
            toSwap=i;
        }
    }

    cout<<str[toSwap];
    for(int i=0;i<n;i++){
        if(i!=toSwap)
            cout<<str[i];
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