#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,temp;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    int val=INT_MAX,max_df=INT_MIN;
    for(int i=0;i<n;i++){
        if(b[i]==0) max_df=max(max_df,a[i]);
        else    val=a[i]-b[i];
    }
    if(val<0)   return "NO";
    for(int i=0;i<n;i++){
        if(b[i]!=0){
            if((a[i]-b[i])!=val)  return "NO";
        }
    }
    if(max_df<=val) return "YES";
    else return "NO";
    
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