#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
void solve( ){
    ll n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    ll count=0;
    for(int i=0;i<n;i++){
        // cout<<a[i]<<" "<<b[i]<<endl;
        if(b[i]=='1'){
            if(a[i]=='0'){
                a[i]='2';
                count++;
            }
            else if(i>0&&a[i-1]=='1'){
                a[i-1]='2';
                count++;
            }
            else if(i<n-1&&a[i+1]=='1'){
                a[i+1]='2';
                count++;
            }
        }
    }
    cout<<count<<endl;
    return;
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