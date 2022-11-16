#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(){
    ll n,pos=0,zero=0,neg=0;
    cin>>n;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>mp{};
    vector<ll>shortend{};
    for(int i=0;i<n;i++){
        if(a[i]>0){
            if(pos<2){
                pos++;
                shortend.push_back(a[i]);
            }
            else    return "NO";
        }
        else if(a[i]<0){
            if(neg<2){
                neg++;
                shortend.push_back(a[i]);
            }
            else return "NO";
        }
        else if(a[i]==0){
            if(zero<2){
                shortend.push_back(0);
                zero++;
            }
        }
    }
    for(auto i:shortend)
        mp[i]++;

    n=shortend.size();
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++)
                if(mp[shortend[i]+shortend[j]+shortend[k]]==0)
                    return "NO";
        }
    }
    return "YES";
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