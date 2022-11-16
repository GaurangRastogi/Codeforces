#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,x,temp=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>x;
        if(temp==-1)    temp=x;
        else temp|=x;
    }
    return temp;
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