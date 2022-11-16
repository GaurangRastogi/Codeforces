#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,x,count=0;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=x;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        if((i+1)>=v[i]&&(n-i)>=v[i]){
            count+=v[i];
        }
        else if((i+1)>=v[i]){
            count+=n-i;
        }
        else if(n-i>=v[i]){
            count+=i+1;
        }
        cout<<count<<endl;
    }
    
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
    return 0;
}