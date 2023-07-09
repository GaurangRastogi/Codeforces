#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    if(n==1){
        cout<<1<<" ";
        return;
    }
    ll mx=(arr[0]!=n)?n:n-1;
    ll ind;
    for(int i=1;i<n;i++){
        if(arr[i]==mx){
            ind=i;
            break;
        }
    }
    
    vector<ll>ans;
    for(int k=ind;k<n;k++){
        ans.push_back(arr[k]);
    }

    int flag=0;
    if(ind!=n-1){
        ans.push_back(arr[ind-1]);
        flag=1;
    }
    ll st=0,end=ind-1-flag;
    while(st<=end){
        if(arr[end]>arr[st]){
            ans.push_back(arr[end]);
            end--;
        }
        else{
            break;
        }
    }

    while(st<=end){
        ans.push_back(arr[st++]);
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}