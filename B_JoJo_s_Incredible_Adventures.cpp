#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll count=0,mx=0;
    string str;
    cin>>str;

    ll n=str.size();

    //first ones
    ll i=0;
    while(i<n){
        if(str[i]=='0')
            break;
        else
            mx++;
        i++;
    }
    ll j=n-1;
    while(j>i){
        if(str[j]=='0')
            break;
        else
            mx++;
        j--;
    }
    for(ll i=0;i<n;i++){
        if(str[i]=='0'){
            mx=max(mx,count);
            count=0;
        }
        else{
            count++;
        }
    }
    mx=max(mx,count);
    if(mx==n){
        cout<<mx*mx<<endl;
        return;
    }

    ll l=1,h=mx,ans=0;
    while(l<=h){
        ans=max(ans,l*h);
        l++;
        h--;
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}