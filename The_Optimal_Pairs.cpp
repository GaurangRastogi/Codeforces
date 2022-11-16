#include<iostream>
#include<math.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0,val=n/2;
    for(int i=1;i<val;i++)
        if((n-i)%i==0)    
            count+=2;
    cout<<count+(n%2==0)<<endl;
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