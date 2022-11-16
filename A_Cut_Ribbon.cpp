#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],n,mx=INT_MIN;
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    for(int i=0;i<=4000;i++){
        for(int j=0;j<=4000;j++){
            int k=n-a[0]*(i)-a[1]*(j);
            if(k>=0&&k%a[2]==0) mx=max(mx,i+j+(k/a[2]));
        }
    }
    cout<<mx;
    return 0;
}