#include<bits/stdc++.h>
using namespace std;
long long int x_o_r(long long int n){
    if (n % 4 == 0)
    return n;
   if (n % 4 == 1)
    return 1;
   if (n % 4 == 2)
    return n + 1;
   return 0;
}
int solve(){
    long long int n,k;
    cin>>n>>k;
    int temp=x_o_r(n);
    while(k>1){
        temp/=2;
        k--;
    }
    return temp%2;
}
int main(){
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
    return 0;
}