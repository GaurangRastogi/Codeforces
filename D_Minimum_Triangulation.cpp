#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
   int n;
   cin>>n;
   ll sum=0;
   for(int i=2;i<n;i++){
        sum+=(ll)i*(ll)(i+1);
   }
   return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--)  
        cout<<solve()<<endl;
    return 0;
}