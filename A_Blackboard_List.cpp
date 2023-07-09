#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,val;
    cin>>n;

    ll mn=INT_MAX,mx=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>val;
        mn=min(mn,val);
        mx=max(mx,val);
    }

    if(mn<0){
        cout<<mn<<endl;
    }
    else{
        cout<<mx<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}