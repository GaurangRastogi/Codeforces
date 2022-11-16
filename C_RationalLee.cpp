#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k,x,ans=0,temp=0;
    cin>>n>>k;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll>count{};
    for(int i=0;i<k;i++){
        cin>>x;
        if(x==1)
            temp++;
        else
            count.push_back(x-1);    
    }
    sort(count.begin(),count.end(),greater<int>());
    k=count.size();
    //first take care of count=1, then take count with max_value to skip least value data
    x=n-1;
    while(temp>0){
        ans+=2*a[x];
        x--;
        temp--;
    }
    ll l=0,h=x,i=0;
    while(l<h&&i<k){
        ans+=a[l]+a[h];
        h--;
        l+=count[i++];
    }
    cout<<ans<<endl;
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