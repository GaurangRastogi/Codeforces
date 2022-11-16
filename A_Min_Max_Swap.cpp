#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n,mx1=-1e9,mx2=-1e9;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]>b[i])   swap(a[i],b[i]);
        mx1=max(mx1,a[i]);
        mx2=max(mx2,b[i]);
    }
    cout<<mx1*mx2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)  solve();
}