#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int count=0;
    if(a<b) count++;
    if(a<c) count++;
    if(a<d) count++;
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}