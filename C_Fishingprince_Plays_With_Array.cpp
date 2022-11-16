#include<bits/stdc++.h>
using namespace std;
string solve(){
    long long int n,m,k,count,x;
    cin>>n>>m;
    vector<pair<long long int,long long int>>a{},b{};
    for(int i=0;i<n;i++){
        cin>>x;
        count=1;
        while(x%m==0){
            count*=m;
            x/=m;
        }
        a.push_back({x,count});
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>x;
        count=1;
        while(x%m==0){
            count*=m;
            x/=m;
        }
        b.push_back({x,count});
    }
    long long int l=0,r=0;
    while(l<n&&r<k){
        if(a[l].first!=b[r].first)  return "No";
        else{
            if(a[l].second==b[r].second){
                l++;
                r++;
            }
            else if(a[l].second<b[r].second){
                b[r].second-=a[l].second;
                l++;
            }
            else{
                a[l].second-=b[r].second;
                r++;
            }
        }
    }
    if(l<n||r<k)    return "No";
    return "Yes";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}