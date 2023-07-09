#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll nb,ns,nc,pb,ps,pc,b=0,s=0,c=0;

ll rubles;
bool possible(ll pieces){
    ll reqb=max(0ll,pieces*b-nb);
    ll reqs=max(0ll,pieces*s-ns);
    ll reqc=max(0ll,pieces*c-nc);

    ll moneyReq=reqb*pb+reqs*ps+reqc*pc;

    return moneyReq<=rubles;
}
void solve(){
    string str;
    cin>>str;

    cin>>nb>>ns>>nc>>pb>>ps>>pc>>rubles;

    for(auto ch:str){
        if(ch=='B')
            b++;
        else if(ch=='S')
            s++;
        else
            c++;
    }

    //l-> always true, r-> always false
    ll l=0,r=1e13;

    while(l+1<r){
        ll mid=(l+r)>>1;    

        if(possible(mid)){
            l=mid;
        }
        else
            r=mid;
    }

    cout<<l<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}