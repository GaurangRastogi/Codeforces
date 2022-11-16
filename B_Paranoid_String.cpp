#include<bits/stdc++.h>
using namespace std;
long long int solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    long long int sum=0;
    vector<int>v(n,0);
    v[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(str[i]!=str[i+1])   v[i]=v[i+1]+1;
        else  v[i]=v[i+1];
    }
    for(int i=0;i<n;i++)    
        sum+=v[i];
    return sum;   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  
        cout<<solve()<<endl;
    return 0;
}