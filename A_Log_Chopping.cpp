#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,sum=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    sum-=n;
    if(sum%2==0){
        return "maomao90";
    }
    else return "errorgorn";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}