#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin>>n;
    int l=1,h=n;
    while(l<h){
        cout<<h<<" "<<l<<" ";
        h--;
        l++;
    }
    if(n%2){
        cout<<n/2+1;
    }
    cout<<endl;
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