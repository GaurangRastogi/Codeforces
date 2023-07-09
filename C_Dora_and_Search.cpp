#include<bits/stdc++.h>
using namespace std;
void solve(){
    //tutorial
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    }

    int mn=1,mx=n;
    int l=0,r=n-1;
    while(l<=r){
        if(v[l]==mn){
            mn++;
            l++;
        }
        else if(v[l]==mx){
            mx--;
            l++;
        }
        else if(v[r]==mn){
            mn++;
            r--;
        }
        else if(v[r]==mx){
            mx--;
            r--;
        }
        else{
            break;
        }
    }

    if(l<r){
        cout<<l+1<<" "<<r+1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
        solve();

   return 0;

}