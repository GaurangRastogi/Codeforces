#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    return v[n-1]>v[0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        if(solve())
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}