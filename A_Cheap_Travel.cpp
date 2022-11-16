#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost=n*a;
    int i=0,count=0;;
    while(i<=n){
        if(i>count*m)   count++;
        cost=min(cost,((n-i)*a+count*b));
        i++;
    }
    cout<<cost;
    return 0;
}