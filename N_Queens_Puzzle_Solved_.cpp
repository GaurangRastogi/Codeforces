#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    float ans=(0.143)*n,ans2=1;
    for(int i=1;i<=n;i++){
        ans2*=ans;
    }
    if((ans2-int(ans2))<0.5)    return int(ans2);
    else return int(ans2)+1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}