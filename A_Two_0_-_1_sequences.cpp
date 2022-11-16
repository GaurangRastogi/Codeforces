#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b;
    cin>>a>>b;
    ll j=b-1,i=a-1;
    string str1,str2;
    cin>>str1>>str2;
    while(j>0){
        if(str1[i]!=str2[j]){
            cout<<"NO"<<endl;
            return;
        }
        j--;
        i--;
    }
    while(i>=0){
        if(str1[i]==str2[0]){
            cout<<"YES"<<endl;
            return;
        }
        i--;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}