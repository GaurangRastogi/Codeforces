#include<bits/stdc++.h>
using namespace std;
long long int solve(){
    long long int a,b,x=0;
    cin>>a>>b;
    int temp=abs(a-b);
    for(int i=1;i<=sqrt(temp);i++){
        if(temp%i==0){
            if(temp/i==i)   x+=1;
            else x+=2;
        }
    }
    return x;
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