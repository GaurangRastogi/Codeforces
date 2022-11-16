#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        if(v[i]>k)
            count++;
    }
    cout<<count<<endl;
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