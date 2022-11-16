#include<bits/stdc++.h>
using namespace std;
int solve(){
   long long int n,k;
   cin>>n>>k;
   if(k==1) return n%2;
   else if(k==2)    return 1;
   else return 0;  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int parity=solve();
        if(parity==1)   cout<<"ODD"<<endl;
        else cout<<"EVEN"<<endl;
    }
    return 0;
}