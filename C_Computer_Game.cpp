#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll k,n,a,b;
    cin>>k>>n>>a>>b;
    ll low=0,high=n;
    while (low<=high)
    {
        ll mid=(low+high)/2;
        if(mid*a+(n-mid)*b<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
    
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