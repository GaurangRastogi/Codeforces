#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b;
    if(n%2==0){
        a=n/2;
        b=n/2+1;
    }
    else{
        a=n/2+1;
        b=n/2+2;
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<a<<" ";
            a--;
        }
        else{
            cout<<b<<" ";
            b++;
        }
    }
    cout<<endl;
    return;
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