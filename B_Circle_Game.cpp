#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1)    return "Mike";
    int ind=0,mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
            ind=i;
        }
    }
    ind++;
    if(n%2==0){
        if(ind%2==1)    return "Joe";
        else return "Mike";
    }
    else{
        return "Mike";
    }
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