#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long double arr[n];
    long double sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    sum-=arr[n-1];
    printf("%.9f\n",float(arr[n-1]+((long double)sum/(long double)(n-1))));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    solve();
    return 0;
}