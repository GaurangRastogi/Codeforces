#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b;
    cin>>a>>b;
    return b*(ceil(float(a)/6));
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