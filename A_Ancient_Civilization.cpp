#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,l,x,sum=0;
    cin>>n>>l;
    vector<int>v(l,0);
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=0;j<l;j++){
            v[j]+=x%2;
            x/=2;
        }
    }
    for(int i=0;i<l;i++){
        if(v[i]>(n-v[i]))
            sum+=pow(2,i);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
    return 0;
}