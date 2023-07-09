#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool valid(set<ll>&st,ll mid){
    if(st.size()<=3){
        return true;
    }
    // if(mid==2)
    // cout<<*st.begin()<<endl;
    ll count=1,start=*st.begin();
    for(auto val:st){
        if((val-start)>2*mid){
            // cout<<start<<" "<<val<<endl;
            count++;
            start=val;
        }

    }
    // cout<<endl;
    // cout<<mid<<" "<<count<<endl<<endl;
    return count<=3;
}
void solve(){
    ll n,val;
    cin>>n;

    set<ll>st;

    for(int i=0;i<n;i++){
        cin>>val;
        st.insert(val);
    }

    // for(auto i:st){
    //     cout<<i<<" ";
    // }

    //time ->-1 is always false
    // high always true
    ll low=-1,high=2e9;

    while(low+1<high){
        ll mid=(low+high)/2;

        if(valid(st,mid))
            high=mid;

        else
            low=mid;
    }

    cout<<high<<endl;
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