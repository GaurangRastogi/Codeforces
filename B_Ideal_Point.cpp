#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,count=0,l,r;
    cin>>n>>k;
    vector<int>array(51,0);
    for(int i=0;i<n;i++){
        cin>>l>>r;
        if(l<=k&&k<=r){
        for(int i=l;i<=r;i++){
            array[i]++;
        }
        }
    }

    for(int i=0;i<51;i++){
        if(i!=k&&array[i]>=array[k]){
            // cout<<i<<" "<<array[k];
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;

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