#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }


    ll count=1;
    for(int i=1;i<n;i++){
        if(a[i-1]==0){
            if((a[i]*b[i])%b[i-1]>0){
                count++;
            }
            else{
                int divisibility=(a[i]*b[i])/b[i-1];
                if(a[i]%divisibility>0){
                    count++;
                }
                else{
                    b[i]=b[i-1];
                    a[i]=0;
                }
            }
        }
        else{
            ll lcm=(b[i]*b[i-1])/gcd(b[i],b[i-1]);

            if((a[i]*b[i])%lcm==0&&(a[i-1]*b[i-1])%lcm==0){
                a[i]=a[i-1]=gcd((a[i]*b[i])/lcm,(a[i-1]*b[i-1])/lcm);
                b[i]=b[i-1]=lcm;
            }
            else{
                count++;
            }
        }
    }
    cout<<count<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}