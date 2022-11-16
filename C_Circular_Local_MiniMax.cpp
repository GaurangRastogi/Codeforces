#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],b[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    if(n%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    sort(arr,arr+n);
    int l=0,h=n/2,k=0;
    while(l<n/2&&h<n){
        b[k]=arr[l++];
        b[k+1]=arr[h++];
        k+=2;
    }
    for(int i=0;i<n;i++){
        int a=(i+n-1)%n,big=(i+1)%n;
        if((b[i]>b[a]&&b[i]>b[big])||(b[i]<b[a]&&b[i]<b[big])){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}