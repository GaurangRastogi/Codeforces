#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,b;
    char a;
    cin>>n;
    map<int,int>mp{};
    cin>>a>>b;
    mp[b]=0;
    ll l=-1,r=1;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        if(a=='L'){
            mp[b]=l;
            l--;
        }
        else if(a=='R'){
            mp[b]=r;
            r++;
        }
        else{
            cout<<min(abs(mp[b]-l),abs(mp[b]-r))-1<<endl;
        }
    }

    // for(auto i:mp)
    //     cout<<i.first<<" "<<i.second<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}