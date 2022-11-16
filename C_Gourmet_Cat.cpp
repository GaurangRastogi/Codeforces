#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll ans=0,mx=0;
    ll x,y,z,a,b,c;
    cin>>x>>y>>z;
    for(int i=0;i<7;i++){
        a=x;
        b=y;
        c=z;
        ans=0;
        for(int j=i;j<7;j++){
            ll temp=j%7;
            if(temp==0||temp==3||temp==6){
                if(a==0)
                    break;
                a--;
                ans++;
            }
            else if(temp==1||temp==5){
                if(b==0)
                    break;
                b--;
                ans++;
            }
            else{
                if(c==0)
                    break;
                c--;
                ans++;
            }
        }
        ll xa=a/3,yb=b/2,zc=c/2;
        ll val=min(xa,min(yb,zc));
        ans+=val*7;
        a-=val*3;
        b-=val*2;
        c-=val*2;
        //cout<<a<<" "<<b<<" "<<c<<endl;
        for(int j=0;j<7;j++){
            ll temp=j%7;
            if(temp==0||temp==3||temp==6){
                if(a==0)
                    break;
                a--;
                ans++;
            }
            else if(temp==1||temp==5){
                if(b==0)
                    break;
                b--;
                ans++;
            }
            else{
                if(c==0)
                    break;
                c--;
                ans++;
            }
        }
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}