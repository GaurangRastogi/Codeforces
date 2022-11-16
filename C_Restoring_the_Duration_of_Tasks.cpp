#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,temp,x,curr=INT_MIN;
    cin>>n;
    queue<int>q1,q2;
    for(int i=0;i<n;i++){
        cin>>x;
        q1.push(x);
    }    
    for(int i=0;i<n;i++){
        cin>>x;
        q2.push(x);
    } 
    while(!q1.empty()){
        int a=q1.front(),b=q2.front();
        if(curr>a)  cout<<b-curr<<" ";
        else cout<<b-a<<" ";
        curr=q2.front();
        q2.pop();
        q1.pop();
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