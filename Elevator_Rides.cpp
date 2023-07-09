#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main(){
    ll n,k;
    cin>>n>>k;

    vector<ll>arr(n);
    
    for(auto &it:arr)
        cin>>it;

    ll mask=(1<<n)-1;
    vector<ll>dp(mask+1,0ll);

    for(int i=1;i<=n;i++){
        if(possible(i)){
            
        }
    }

    return 0;
}