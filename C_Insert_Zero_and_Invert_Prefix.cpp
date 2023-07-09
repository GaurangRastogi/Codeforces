#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
   ll n;
   cin>>n;
   
   vector<ll>arr(n);

    for(auto &it:arr)
        cin>>it;

    if(arr[n-1]==1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    ll count=0;

    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            cout<<0<<" ";
        }
        else{
            if(i==0||arr[i-1]==0){
                cout<<count+1<<" ";
                count=0;
            }
            else{
                cout<<0<<" ";
                count++;
            }
        }
    }
    cout<<endl;
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