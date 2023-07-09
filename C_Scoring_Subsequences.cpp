#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    long long int i=0,prod=1,curr=0;
    while(i<n){
        curr++;
        while(curr>1&&v[i-curr+1]<curr){
            curr--;
        }
        i++;
        cout<<curr<<" ";
    }

    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}