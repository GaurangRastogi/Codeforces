#include<bits/stdc++.h>
using namespace std;
string solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx=max(a,b);
    int mn=max(c,d);
    if(mx>mn)   return "Q";
    else if(mn>mx)  return "P";
    else return "TIE";

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