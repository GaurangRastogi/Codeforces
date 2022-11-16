#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,x;
    cin>>n;
    int one_count=0;
    for(int i=0;i<n;i++){
        cin>>x;
        one_count+=x;
    }
    if(one_count%2==0)  return "YES";
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