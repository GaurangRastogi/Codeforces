#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second!=p2.second)
        return p1.second<p2.second;
    return p1.first<p2.first;
}

void solve(){
    ll n,r,avg,a,b,sum=0;
    cin>>n>>r>>avg;
    vector<pair<int,int>>vp(n,{0,0});
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp[i].first=a;
        vp[i].second=b;
        sum+=a;
    }
    sort(vp.begin(),vp.end(),comparator);
    ll extra=avg*n-sum;
    if(extra<=0){
        cout<<0<<endl;
        return;
    }
    ll essay=0;
    for(int i=0;i<n;i++){
        ll temp=r-vp[i].first;
        //cout<<temp<<" "<<extra<<" "<<vp[i].first<<" "<<vp[i].second<<endl;
        if(temp<=extra){
            extra-=temp;
            essay+=temp*vp[i].second;
        }
        else{
            essay+=extra*vp[i].second;
            extra=0;
            break;
        }
    }

    if(extra>0){
        cout<<-1<<endl;
        return;
    }
    cout<<essay<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}