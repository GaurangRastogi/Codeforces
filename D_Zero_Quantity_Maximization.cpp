#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,def=0,g;
    long double val;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    map<long double,int>um{};
    for(int i=0;i<n;i++){
        if(a[i]==0&&b[i]==0)    def++;
        else if(a[i]!=0){
        g = __gcd(a[i], b[i]);
		a[i] /= g, b[i] /= g;
        val=(-1*(long double)b[i])/(long double)a[i];
        um[val]++;
        }  
    }
    int mx=0;
    for(auto i:um){
        if(i.second>mx)
            mx=i.second;
    }
    return mx+def;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
    return 0;
}