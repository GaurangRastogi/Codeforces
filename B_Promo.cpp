#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q,a,b;
    cin>>n>>q;
    long long int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++)    arr[i]+=arr[i-1];
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if(a<n)
            cout<<arr[n-(a-b)-1]-arr[n-a-1]<<endl;
        else cout<<arr[n-(a-b)-1]<<endl;
    }
    return 0;
}