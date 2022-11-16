#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll val1=a*d,val2=b*c;
    if(val1==val2)
        return 0;
    else if(val1==0||val2==0)
        return 1;
    else if(val1%val2==0||val2%val1==0)
        return 1;
    return 2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // cout<<t<<" ";
        cout<<solve()<<endl;
    }
    return 0;
}


