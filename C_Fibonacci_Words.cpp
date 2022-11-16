#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string str;
    cin>>str;
    int count=0;
    for(int i=2;i<str.size();i++){
        int temp=((str[i-1]-'A')+(str[i-2]-'A'));
        int temp2=str[i]-'A';
        temp%=26;
        if(temp==temp2)
            continue;
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}