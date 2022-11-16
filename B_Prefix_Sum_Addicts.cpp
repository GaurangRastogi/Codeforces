#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k,0);
    for(int i=0;i<k;i++)
        cin>>v[i];
    
    if(k==1){
        cout<<"Yes"<<endl;
        return;
    }
    vector<ll>v3{};
    for(int i=1;i<k;i++){
        v3.push_back(v[i]-v[i-1]);
    }
    //cout<<v3[0]<<" ";
    for(int i=1;i<v3.size();i++){
        //cout<<v3[i]<<" ";
        if(v3[i]<v3[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    ll mn=v[1]-v[0],temp;
    // cout<<mn<<" "<<v[0]<<" "<<n-k+1;
    if(mn*(n-k+1)>=v[0])
        cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;
    return;
    // if(abs(v[0])%(n-k+1)){
    //     temp=v[0]/(n-k+1);
    //     if(v[0]<0)
    //         temp--;
    //     else
    //         temp++;
    //     // cout<<temp<<" ";
    // }
    // else
    //     temp=v[0]/(n-k+1);
    // // cout<<temp<<endl;
    // if(temp>mn)
    //     cout<<"No"<<endl;
    // else    cout<<"Yes"<<endl;
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