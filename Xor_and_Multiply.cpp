#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,a,b,sum=0,flag=0;
    cin>>n>>a>>b;
    vector<ll>x,y,z;
    for(int i=0;i<n;i++){
        if (a%2==1)  x.push_back(0);
        else x.push_back(1);
        a/=2;
    }
    for(int i=0;i<n;i++){
        if(b%2==1)  y.push_back(0);
        else y.push_back(1);
        b/=2;
    }
    for(int i=0;i<n;i++){
        if(x[i]==y[i])  z.push_back(x[i]);
        else{
            z.push_back(flag);
            flag=1-flag;
        }
    }
    for(int i=0;i<n;i++){
        sum+=z[i]*pow(2,i);
    }
    return sum;
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