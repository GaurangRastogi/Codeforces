#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    ll low=0,high=n,mid;
    //binary search for answer
    while(low+1<high){
        mid=(low+high)>>1;
        ll start=mid,end=n-mid+1;
        vector<ll>temp;
        for(ll i=start;i<=end;i++){
            temp.push_back(mp[i]);
        }
        bool flag=true;
        for(ll i=1;i<temp.size();i++){
            if(temp[i]<temp[i-1]){
                flag=false;
                break;
            }
        }
        if(flag){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<high-1<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}
