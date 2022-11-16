#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<ll>x,y;
void solve(vector<ll>&mpx,vector<ll>&mpy){
    ll t,a,b,c,d;
    cin>>t;
    if(t==1){
        cin>>a>>b;
        mpx[a]++;
        mpy[b]++;
        x.erase(a);
        y.erase(b);
    }
    else if(t==2){
        cin>>a>>b;
        mpx[a]--;
        mpy[b]--;
        if(mpx[a]==0)
            x.insert(a);
        if(mpy[b]==0)
            y.insert(b);
    }
    else{
        cin>>a>>c>>b>>d;
        int flag=1;
        auto itr=x.lower_bound(a);
        if(itr!=x.end()){
            if(*itr<=b)
                flag=0;
        }
        if(flag==0){
            flag=1;
            itr=y.lower_bound(c);
            if(itr!=y.end()){
                if(*itr<=d)
                    flag=0;
            }
        }
        if(!flag)
            cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        x.insert(i);
        y.insert(i);
    }
    vector<ll>mpx(n+1,0),mpy(n+1,0);
    for(int i=0;i<q;i++)
        solve(mpx,mpy);
        
    return 0;
}