#include<bits/stdc++.h>
using namespace std;
string solve(){
    int a,b;
    cin>>a>>b;
    if((b-a)%3==2)  return "NO";
    else return "YES";
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