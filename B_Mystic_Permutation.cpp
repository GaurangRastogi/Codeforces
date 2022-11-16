#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    if(n==1){
        cout<<-1;
        return;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]==b[i]){
            swap(a[i],a[i+1]);
        }
    }
    if(a[n-1]==b[n-1]){
        swap(a[n-2],a[n-1]);
    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}