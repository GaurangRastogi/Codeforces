#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"No"<<endl;
        return;
    }


    vector<int>one(n),two(n);

    for(int i=1;i<=n;i++){
        one[i-1]=i;
        two[i-1]=n+i;
    }

    rotate(one.begin(),one.begin()+n/2,one.end());


    cout<<"Yes"<<endl;

    for(int i=0;i<n;i++){
        cout<<one[i]<<" "<<two[i]<<endl;
    }

    return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}