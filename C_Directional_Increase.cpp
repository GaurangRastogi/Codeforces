#include<bits/stdc++.h>
using namespace std;
//curr+arr[i]!=curr 
//curr should be zero at last only
string solve(){
    long long n;
    cin>>n;
    long long v[n],prefix[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }  
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=v[i]+prefix[i-1];
    }
    if(prefix[n-1]!=0)   return "No";
    for(int i=0;i<n;i++){
        if(prefix[i]<0) return "No";
    } 
    for(int i=0;i<n;i++){
        if(prefix[i]==0){
            for(int j=i+1;j<n;j++){
               // cout<<prefix[j]<<" ";
                if(prefix[j]!=0)    return "No";
            }
            break;
        }
    }
    return "Yes";
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