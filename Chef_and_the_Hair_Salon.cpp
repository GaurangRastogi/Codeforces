#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,m;
    cin>>n>>m;
    return n*m;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}