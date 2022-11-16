#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,i=2;
    cin>>n>>k;
    vector<int>sol;
    if(n==k)    cout<<-1;
    else{
        if((n-1-k)%2==1)  cout<<n<<" ";
        else cout<<1<<" ";
        while(i<=k+1) {cout<<i<<" ";i++;}
        for(i;i<=n;i+=2){
            if(i==n&&(n-1-k)%2==1)  {cout<<1;break;}
            cout<<i+1<<" "<<i<<" ";
        } 
    }
}