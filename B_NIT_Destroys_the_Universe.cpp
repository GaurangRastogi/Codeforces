#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)   
        cin>>arr[i];
    int flag=0;
    for(int i=1;i<=n;i++){
        if(arr[i]!=0){
            flag=1;
        }
    }
    int l=n,r=0;
    for(int i=1;i<=n;i++){
        if(arr[i]!=0){
            l=i;
            break;
        }
    }
    for(int i=n;i>=0;i--){
        if(arr[i]!=0){
            r=i;
            break;
        }
    }
    for(int i=l+1;i<r;i++){
        if(arr[i]==0)   flag=2;
    }
    return flag;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}