#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,m,x;
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    return max(0,sum-m);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    
}