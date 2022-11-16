#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,c1=0,c0=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>b[i];
        c1+=b[i];
        c0+=1-b[i];
    }
    if(c1>0&&c0>0)  return "Yes";
    else{
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]) return "No";
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
    while(t--){
        cout<<solve()<<endl;
    }
    
}