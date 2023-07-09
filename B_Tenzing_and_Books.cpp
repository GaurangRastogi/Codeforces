#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool valid(ll val,set<ll>&st){
    ll i=0;
    while(val){
        if(val%2){
            if(st.find(i)==st.end())
                return false;
        }
        val/=2;
        i++;
    }
    return true;
}
void solve(){
    ll n,x;
    cin>>n>>x;

    set<ll>st;
    ll i=0,req=x;
    while(x){
        if(x%2)
            st.insert(i);
        i++;
        x/=2;
    }

    ll know=0,val;
    for(int i=0;i<3;i++){
        queue<ll>stk;
        for(int j=0;j<n;j++){
            cin>>val;
            stk.push(val);
        }
        while(stk.size()){
            val=stk.front();
            if(valid(val,st)){
                know|=val;
                stk.pop();
            }
            else{
                break;
            }
        }
    }

    if(know==req){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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