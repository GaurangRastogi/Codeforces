#include<bits/stdc++.h>
using namespace std;
int func(int n){
     for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}
void solve(){
    int n;
    cin>>n;
    if(func(n)!=-1&&(func(func(n))||func(n/func(n)))){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}