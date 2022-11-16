#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,x,odd=0,even,count,greater=0,sum=0;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<2*n;i++){
        cin>>x;
        if(x%2) odd++;
        else{
            v.push_back(x);
        }
    }
    even=v.size();
    //cout<<even<<" "<<odd;
    if(odd>n)   return odd-n;
    greater=even-n;
    for(ll i=0;i<even;i++){
        count=0;
        while(v[i]%2!=1){
            v[i]/=2;
            count++;
        }
        v[i]=count;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<greater;i++){
        sum+=v[i];
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