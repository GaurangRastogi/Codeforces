#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k,count=0,flag=1;
    cin>>n>>k;
    long long int arr[n+1];
    queue<int>q{};
    for(int i=1;i<=n;i++)    cin>>arr[i];
    for(int i=2;i<=n;i++){
        if(2ll*arr[i]<=arr[i-1])      q.push(i-1);
    }
    q.push(INT_MAX);
    for(int i=1;i<=n-k;i++){
       // cout<<i<<" "<<i+k<<" "<<q.front()<<endl;
        if(q.front()>=i+k)   count++;
        if(i==q.front())    q.pop();
    }
    return count;
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