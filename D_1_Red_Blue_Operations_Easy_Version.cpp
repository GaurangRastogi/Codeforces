#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 

void solve2(vector<ll>arr,ll n,ll k){

    //add last elements to array,make it blue
    ll l=k;
    for(ll i=0;i<n-(n%2!=k%2);i++,l--){
        arr[i]+=l;
    }
    // for(ll i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;

    //left to be subtracted
    ll left=l/2;

    //you've to substract left from array, use bs for ans
    ll st=INT_MIN,end=INT_MAX;
    // cout<<"\nleft "<<left;
    while(st+1<end){
        ll mid=(st+end)/2;
        ll sub=left,flag=1;
        for(int i=0;i<n;i++){
            if(arr[i]>=mid){
                sub=max(0ll,sub-(arr[i]-mid));
            }
            else{
                flag=0;
                break;
            }
        }
        if(sub==0&&flag)
            st=mid;
        else
            end=mid;
    }    

    cout<<st<<" ";
}
 
void solve()
{
    ll n,q,k;
    cin>>n>>q;
 
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());

    if(n==1){
        for(ll i=0;i<q;i++){
            cin>>k;
            ll val=k/2;
            ll ans=arr[0]-val;
            if(k%2){
                ans+=k;
            }
            cout<<ans<<" ";
        }
    }

    else{

        for(ll i=0;i<q;i++){
            cin>>k;
            if(k<=n){
                ll ans=INT_MAX;
                for(ll j=0,l=k;j<n;j++,l--){
                    ans=min(ans,arr[j]+max(0ll,l));
                }
                cout<<ans<<" ";
            }
            else
                solve2(arr,n,k);
        }
    }
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}