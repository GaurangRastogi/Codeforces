#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve(){
    int n,k;
    cin>>k>>n;
    int curr=1,diff=0;
    while(true&&diff<k){
        if(n+1>=k+curr){
            diff++;
            cout<<curr<<" ";
            curr+=diff;
        }
        else{
            break;
        }
    }
    while(diff<k){
        cout<<curr<<" ";
        curr++;
        diff++;
    }
    cout<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}