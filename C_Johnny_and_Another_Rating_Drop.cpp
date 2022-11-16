#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,i=1,sum=0,temp;
    cin>>n;
    while(n>0){
        temp=ceil((double)n/2);
        n-=temp;
       // cout<<i<<" "<<temp<<endl;
        sum+=temp*i;
        i++;
    }
    cout<<sum<<endl;
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