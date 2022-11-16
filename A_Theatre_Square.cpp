#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long int x=ceil(double(n)/double(a));
    long long int y=ceil(double(m)/double(a));
    printf("%lld",x*y);
    return 0;
}