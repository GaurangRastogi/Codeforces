#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin>>n;

    string str1,str2;
    cin>>str1>>str2;

    ll org=0,nonorg=0;

    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i])
            org++;
    }

    for(int i=0;i<n;i++){
        if(str1[i]!=str2[n-1-(i)])
            nonorg++;
    }
    // cout<<org<<" "<<nonorg<<endl;

    ll mn=2*n;
    if(org==0){
        cout<<0<<endl;
        return;
    }
    if(nonorg==0){
        cout<<2<<endl;
        return;
    }

    if(org%2){
        mn=min(mn,org+org-1);
    }
    else{
        mn=min(mn,org+org);
    }

    if(nonorg%2){
        mn=min(mn,nonorg+nonorg);
    }
    else{
        mn=min(mn,nonorg+nonorg-1);
    }

    cout<<mn<<endl;
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