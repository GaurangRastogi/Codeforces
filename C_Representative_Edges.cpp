#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    double n;
    cin>>n;


    vector<double>v(n);

    for(auto &it:v)
        cin>>it;
    
    if(n==1||n==2){
        cout<<0<<endl;
        return;
    }

    ll mx=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j)
                continue;
            double diff=(v[j]-v[i])/(j-i);
            double val=v[i]-i*diff;
            ll count=2;
            for(int k=0;k<n;k++){
                if(k==i||k==j)
                    continue;
                ll temp=val+k*diff;
                if(temp==v[i])
                    count++;
            }
            mx=max(mx,count);
        }
    }
    cout<<n-mx<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}