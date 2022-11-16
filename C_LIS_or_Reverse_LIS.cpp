#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,x,flag=0,a=0,b=0;
    cin>>n;
    map<int,int>mp{};
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    for(auto i:mp){
        if(i.second==1){
            if(flag)    a++;
            else b++;
            flag=1-flag;
        }
        else{
            a++;
            b++;
        }
    }
    return max(a,b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)  
    cout<<solve()<<endl;
    return 0;
}