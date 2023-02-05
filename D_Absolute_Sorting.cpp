#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll x;

void utility(vector<ll>&v,ll n,ll st,ll end){
    ll flag=0;
    if(st<=end){
        ll m=(st+end)/2;
        for(int i=0;i<n-1;i++){
            if((abs(v[i]-m)>abs(v[i+1]-m))){
                if(v[i]>v[i+1])
                    flag=1;
                else
                    flag=2;
                break;
            }
        }

        if(flag==1)
            utility(v,n,m+1,end);
        else if(flag==2)
            utility(v,n,st,m-1);
        else   
            x=m;
    }
}
void solve(){
  ll n;
  cin>>n;
  vector<ll>v(n,0ll);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  x=-1;
  
  utility(v,n,0,1e9);
  cout<<x<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}