#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    int arr[n],temp;
    for(int i=0;i<n;i++)    cin>>arr[i];
    if(arr[n-2]>arr[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(arr[n-1]>=0){
        cout<<n-2<<endl;
        for(int i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }
        return;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<0;
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