#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float temp=(float)sum/(float)n;
    if(temp-(int)temp!=0){
        cout<<"NO"<<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==temp){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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