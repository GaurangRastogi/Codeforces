#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(vector<ll>&v,ll factor,ll n){
    ll i=0,curr=0,count=0;
    //cout<<factor<<" ";
    while(i<n){
        //cout<<curr<<" "<<count<<endl;
        curr+=v[i];
        if(curr>factor){
            return INT_MAX;
        }
        else if(curr==factor){
            curr=0;
            count++;
            i++;
        }
        else{
            i++;
        }
    }
    if(curr!=0&&curr<factor)
        return INT_MAX;
    else return n-count;
}
ll solve(){
    ll n,sum=0,ans=INT_MAX,x,y;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    for(int i=1;i<=sqrt(sum);i++){
        //cout<<i<<" ";
        if(sum%i==0){
            x=func(v,i,n);
            y=func(v,sum/i,n);
            ans=min(ans,min(x,y));
            //ans=min(ans,min(func(v,i,n),func(v,sum/i,n)));
        }
    }
    return ans;
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