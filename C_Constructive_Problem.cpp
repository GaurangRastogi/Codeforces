#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,val;
    cin>>n;

    vector<ll>arr(n);
    set<ll>st;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);

    }

    //mx
    ll mex=n,i=0;
    auto it=st.begin();
    for(ll i=0;i<n;i++){
        if(*it!=i){
            mex=i;
            break;
        }
        it++;
    }
    
    if(mex==n){
        cout<<"No"<<endl;
        return;
    }
    if(mex==n-1){
        cout<<"Yes"<<endl;
    }

    //start index of mex+1,end index of mex+1;
    ll s=-1,e=-1;
    for(ll i=0;i<n;i++){
        if(arr[i]==mex+1){
            if(s==-1){
                s=i;
                e=i;
            }
            else{
                e=i;
            }
        }
    }
    // cout<<s<<" "<<e<<endl;
    for(ll i=s;i<=e;i++){
        arr[i]=mex;
    }

    //getting new mex
    set<ll>stNew;
    for(auto v:arr){
        stNew.insert(v);
    }

    ll mexNew=n;
    it=stNew.begin();
    for(ll i=0;i<n;i++){
        if(*it!=i){
            mexNew=i;
            break;
        }
        it++;
    }

    if(mexNew==mex+1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}