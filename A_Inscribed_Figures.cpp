#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b,count=0;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i]+v[i+1]==5){
            cout<<"Infinite"<<endl;
            return;
        }
        else{
            count+=v[i]+v[i+1];
        }
    }
    for(int i=0;i<n-2;i++){
        if(v[i]==3&&v[i+1]==1&&v[i+2]==2)
            count--;
    }
    cout<<"Finite"<<endl<<count<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}