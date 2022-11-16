#include<iostream>
using namespace std;
void solve(){
    int n,i;
    cin>>n;
    if(n%3==0||n%3==2)  i=2;
    else i=1;
    while(n>0){
        n-=i;
        cout<<i;
        i=3-i;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}