#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,val;
    cin>>n;

    ll pos1,pos2,posn;

    for(int i=0;i<n;i++){
        cin>>val;

        if(val==1)
            pos1=i+1;
        if(val==2)
            pos2=i+1;
        if(val==n)
            posn=i+1;
    }

    ll mx=max(pos1,pos2);
    ll mn=min(pos1,pos2);

    if(posn<mx&&posn>mn){
        cout<<mn<<" "<<mx<<endl;
    }

    else if(posn<mn){
        cout<<posn<<" "<<mn<<endl;
    }
    else{
        cout<<mx<<" "<<posn<<endl;
    }

    return;
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