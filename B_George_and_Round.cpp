#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,i=0,j=0;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    while(i<m&&j<n){
        if(a[j]>b[i]) i++;
        else {j++;i++;}  
    }
    cout<<n-j;
}