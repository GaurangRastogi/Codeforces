#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,m,x,curr=0,sum=0,out=0;
    cin>>n>>m;
    unordered_map<ll,ll>um{};
    vector<ll>v(m,0);
    for(int i=0;i<n;i++){
        cin>>x;
        um[x]=i;
    }
    for(int i=0;i<m;i++){
        cin>>v[i];
    }

    for(int i=0;i<m;i++){
        if(curr>=um[v[i]]-out){
            sum++;
        }
        else{
            curr=um[v[i]]-out;
            sum+=curr*2+1;
        }
        curr--;
        out++;
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