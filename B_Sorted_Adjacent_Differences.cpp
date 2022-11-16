#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,l,h;
    cin>>n;
    vector<int>v(n,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n%2==0){
        l=n/2-1;
        h=n/2;
        while(l>=0&&h<n){
            cout<<v[l]<<" "<<v[h]<<" ";
            l--;
            h++;
        }
    }
    else{
        cout<<v[n/2];
         l=n/2-1;
        h=n/2+1;
        while(l>=0&&h<n){
            cout<<" "<<v[l]<<" "<<v[h];
            l--;
            h++;
        }
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
    while(t--)
        solve();
}