#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            if(i<n-2)
                arr[i+1]=max(arr[i],arr[i+2]);
            else arr[i+1]=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";};
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}