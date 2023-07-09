#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k;
    cin>>n>>k;

    string str;
    cin>>str;

    sort(str.begin(),str.end());

    if(str[0]!=str[k-1]){
        cout<<str[k-1]<<endl;
        return;
    }      
    
    cout<<str[0];
    if(str[k]!=str[n-1]){
        for(int i=k;i<n;i++)
            cout<<str[i];
    }
    else{
        for(int i=0;i<(n-k+k-1)/k;i++)
            cout<<str[n-1];
    }
    cout<<endl;
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