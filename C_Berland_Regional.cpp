#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparator(pair<ll,ll>& p1,pair<ll,ll>& p2){
    if(p1.first!=p2.first)
        return p1.first<p2.first;
    
    return p1.second>p2.second;
}
void solve(){
    ll n;
    cin>>n;

    vector<int>u(n,0),s(n,0);
    for(int i=0;i<n;i++)
        cin>>u[i];
    for(int i=0;i<n;i++)
        cin>>s[i];

    vector<pair<ll,ll>>vp{};
    for(int i=0;i<n;i++){
        vp.push_back({u[i],s[i]});
    }
    sort(vp.begin(),vp.end(),comparator);
    ll curr=vp[0].second;
    for(int i=1;i<n;i++){
        if(vp[i].first==vp[i-1].first){
            curr+=vp[i].second;
            vp[i].second=curr;
        }
        else{
            curr=vp[i].second;
        }
    }
    vector<ll>temp;
    temp.push_back(vp[0].second);
    vector<vector<ll>>matrix;
    for(int i=1;i<n;i++){
        if(vp[i].first==vp[i-1].first){
            temp.push_back(vp[i].second);
        }
        else{
            matrix.push_back(temp);
            temp={};
            temp.push_back(vp[i].second);
        }
    }
    matrix.push_back(temp);
    
    // for(int i=1;i<=n;i++){
    //     curr=0ll;
    //     for(int j=0;j<matrix.size();j++){
    //         if(i<=matrix[j].size())
    //             curr+=matrix[j][matrix[j].size()-(matrix[j].size()%i)-1];
    //     }    
    //     cout<<curr<<" ";
    // }
    // cout<<endl;
    vector<ll>ans(n,0);
    for(int i=0;i<matrix.size();i++){
        //curr=0ll;
        for(int j=1;j<=matrix[i].size();j++){
            curr=matrix[i][matrix[i].size()-(matrix[i].size()%j)-1];
            ans[j-1]+=curr;
        }
    }
    for(auto i:ans)
        cout<<i<<" ";
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