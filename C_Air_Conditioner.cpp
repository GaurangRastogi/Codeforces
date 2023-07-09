#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,init;
    cin>>n>>init;

    vector<vector<ll>>cust(n,vector<ll>(3));

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>cust[i][j];
        }
    }

    ll prev=0;
    ll mx=init,mn=init;

    bool flag=true;
    for(int i=0;i<n;i++){
        mx+=cust[i][0]-prev;
        mn-=cust[i][0]-prev;

        if (mx < cust[i][1] || mn > cust[i][2])
        {
            flag = false;
            break;
        }

        mx=min(mx,cust[i][2]);
        mn=max(mn,cust[i][1]);
        prev=cust[i][0];
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}