#include<bits/stdc++.h>
using namespace std;
int solve(map<pair<int,int>,int>&um,int a[],int b[],int i,int j,int n,int m){
    if(i>=n||j>=m) um[{i,j}]=0;
    else if(um[{i,j}]!=0)   return um[{i,j}];
    else{
        if(abs(a[i]-b[j])<=1)  
            um[{i,j}]=1+solve(um,a,b,i+1,j+1,n,m);
        else {
            if(a[i]>b[j])   um[{i,j}]=solve(um,a,b,i,j+1,n,m);
            else um[{i,j}]=solve(um,a,b,i+1,j,n,m);
        }
    }
    return um[{i,j}];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    map<pair<int,int>,int>um{};
    cout<<solve(um,a,b,0,0,n,m);
    return 0;
}