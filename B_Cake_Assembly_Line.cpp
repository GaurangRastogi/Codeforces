#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,w,h;
    cin>>n>>w>>h;

    vector<int>a(n),b(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        cin>>b[i];

    int mn=INT_MAX,mx=INT_MIN;

    for(int i=0;i<n;i++){
        mn=min(mn,a[i]-b[i]);
        mx=max(mx,a[i]-b[i]);
        cout<<a[i]-b[i]<<endl;
    }

    cout<<mx-mn<<endl;
    if(mx-mn>2*(w+h)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}