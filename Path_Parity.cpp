#include<bits/stdc++.h>
using namespace std;
string solve(){
   int n,k;
   cin>>n>>k;
   if(n%2==1){
       if(k==1) return "Yes";
       else return "No";
   }
   else return "Yes";
   
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