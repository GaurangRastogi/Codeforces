#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//referred idonthatephy
ll solve(){
    ll n,l,temp,flag,count=0;
    cin>>n;
    vector<vector<ll>>matrix{};
    vector<ll>v{};
    for(int i=0;i<n;i++){
        cin>>l;
        v={};
        for(int j=0;j<l;j++){
            cin>>temp;
            v.push_back(temp);
        }
        matrix.push_back(v);
    }
    vector<ll>v1,v2;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<matrix[i].size()-1;j++){
            if(matrix[i][j+1]>matrix[i][j]){
                count+=n;
                flag=1;
                break;
            }
        }
        ll mn=INT_MAX,mx=INT_MIN;
        if(flag==0){
            for(int j=0;j<matrix[i].size();j++){
                mn=min(matrix[i][j],mn);
                mx=max(matrix[i][j],mx);
            }
            // cout<<mx<<" "<<mn<<" "<<endl;
            v1.push_back(mx);
            v2.push_back(mn);
        }
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<v2.size();i++){
        count+=n-(upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin());
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
    return 0;
}
