#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve(){
    ll n;
    cin>>n;
    vector<int>v1(n,0),v2(n,0);
    for(int i=0;i<n;i++)
        cin>>v1[i];
    for(int i=0;i<n;i++)
        cin>>v2[i];

    for(int i=0;i<n;i++){
        if(v1[i]>v2[i]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            // cout<<v1[i]<<" "<<v2[i]<<" "<<v2[(i+1)%n]<<endl;
            if(v2[(i+1)%n]+1>=v2[i])
                v1[i]=v2[i];
        }
    }

    // for(int i=0;i<n;i++){
    //     cout<<v1[i]<<" "<<v2[i]<<endl;
            
    // }
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            // cout<<v1[i]<<" "<<v2[i]<<" "<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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