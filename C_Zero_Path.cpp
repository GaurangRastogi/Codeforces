#include<bits/stdc++.h>
using namespace std;
int arr[1002][1002];
int n,m;
bool func(int i,int j,int val){
    if(i>n||j>m)    return false;
    if(i==n&&j==m)  return val==0;
    return func(i+1,j,val+arr[i+1][j])+func(i,j+1,val+arr[i][j+1]);
}
string solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    if(func(1,1,arr[1][1])==true)   return "YES";
    else return "NO";
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