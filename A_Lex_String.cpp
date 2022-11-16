#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,m,k;
    cin>>n>>m>>k;
    string a,b;
    cin>>a>>b;
    int temp1=k,temp2=k,i=0,j=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    string ans="";
    while(i<n&&j<m){
        //cout<<a[i]<<" "<<b[j]<<" ";
        if(a[i]<=b[j]){
            if(temp1>0){
                temp1--;
                temp2=k;
                ans+=a[i];
                i++;
            }
            else{
                temp2=k-1;
                temp1=k;
                ans+=b[j];
                j++;
            }
        }
        else{
            if(temp2>0){
                temp2--;
                ans+=b[j];
                j++;
                temp1=k;
            }
            else{
                temp1=k-1;
                temp2=k;
                ans+=a[i];
                i++;
            }
        }
        //cout<<ans.back()<<endl;
    }
    return ans;
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