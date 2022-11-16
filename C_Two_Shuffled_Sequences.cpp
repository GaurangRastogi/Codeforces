#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>even{},odd{};
    for(int i=0;i<n;i++){
        if(i%2==0)  even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    for(int i=1;i<even.size();i++){
        if(even[i]==even[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1;i<odd.size();i++){
        if(odd[i]==odd[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    cout<<odd.size()<<endl;
    for(auto i:odd) cout<<i<<" ";
    reverse(even.begin(),even.end());
    cout<<endl<<even.size()<<endl;
    for(auto i:even)    cout<<i<<" ";
    cout<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}