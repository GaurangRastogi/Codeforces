#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll utility(priority_queue<ll>pq,ll d,ll n){
    ll sum=0;
    while(pq.size()&&d){
        sum+=pq.top();
        pq.pop();
        d--;
    }
    return sum;
}

bool bs_forAns(priority_queue<ll>pq,ll k, ll c, ll d){

    ll mod=d%k,times=d/k;
    // cout<<times<<" "<<mod<<" ";
    ll sum=0;
    while(pq.size()&&d){
        ll top=pq.top();
        pq.pop();

        sum+=top*((mod>0)+times);
        d-=(mod>0)+times;
        mod--;
    }

    // cout<<k<<" "<<sum<<endl;
    return sum>=c;
}

void solve(){

    ll n,c,d,val;
    cin>>n>>c>>d;

    priority_queue<ll>pq;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>val;
        pq.push(val);
    }


    //condition for Impossible
    if(d*pq.top()<c){
        cout<<"Impossible"<<endl;
        return;
    }

    //infinity case
    if(utility(pq,d,n)>=c){
        cout<<"Infinity"<<endl;
        return;
    }


    //0 ->always true
    //h=d => always false, if it's true => then already return as INFINITY
    ll l=0,h=max(d,n)+1;

    while(l+1<h){

        ll mid=(l+h)/2;
        //check first mid elements

        //if mid==0, then k=1 in bs_forAns => we can use it everyday
        //after k-day means once in (k+1)-days

        if(bs_forAns(pq,mid+1,c,d)){
            l=mid;
        }
        else{
            h=mid;
        }
    }
    cout<<l<<endl;
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}