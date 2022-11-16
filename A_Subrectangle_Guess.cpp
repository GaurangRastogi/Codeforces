#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,mx=INT_MIN,x,y;
    cin>>a>>b;
    int arr[a+1][b+1];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin>>arr[i][j];
            if(arr[i][j]>mx){
                mx=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    int l=max(x,a-x+1);
    int m=max(y,b-y+1);
    return l*m;
    
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