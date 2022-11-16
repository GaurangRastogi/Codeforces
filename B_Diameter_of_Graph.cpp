#include<bits/stdc++.h>
using namespace std;
string solve(){
    long long int n,m,k,temp;
    cin>>n>>m>>k;
    k-=2;
    if(m<n-1||m>(n*(n-1))/2)   return "NO";
    else if(n==1)   temp=0;
    else if(m>=n-1&&m<(n*(n-1))/2) temp=2;
    else temp=1;
    if(temp<=k) return "YES";
    return "NO";
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