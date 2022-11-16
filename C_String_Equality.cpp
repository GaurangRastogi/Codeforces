#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(){
    ll n,k,curr=0;
    cin>>n>>k;
    string str1,str2;
    cin>>str1>>str2;
    vector<int>v1(26,0),v2(26,0);
    for(int i=0;i<n;i++){
        v1[str1[i]-'a']++;
        v2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        v1[i]+=curr;
        //cout<<i<<" "<<v1[i]<<" "<<v2[i]<<endl;
        if((v1[i]<v2[i])||(v1[i]-=v2[i])%k){
            return "No";
        }
        curr=v1[i];
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