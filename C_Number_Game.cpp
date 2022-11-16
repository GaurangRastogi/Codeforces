#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool prime_num(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
bool solve(){
    ll n;
    cin>>n;
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==1)
        return true;
    else{
        if((int)(n&(n-1))==0)
            return false;
        else if(n%4==0){
            return true;
        }
        else if(prime_num(n/2))
            return false;
        else 
            return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll t;
    cin>>t;
    while(t--){
        if(solve())
            cout<<"Ashishgup";
        else   
            cout<<"FastestFinger";
        cout<<endl;
    }
    return 0;
}