#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(){
    ll n,k;
    cin>>n>>k;

    vector<char>leader(k);
    for(int i=0;i<k;i++)
        cin>>leader[i];

    int count=0;
    char ch;    
    for(int i=1;i<n;i++){
        int flag=1;
        for(int j=0;j<k;j++){
            cin>>ch;
            if(ch!=leader[j]){
                flag=0;
            }
        }
        if(flag)
            count++;
    }
    cout<<count+1<<endl;
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
    cout.flush();
    return 0;
}