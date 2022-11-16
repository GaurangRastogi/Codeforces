#include<bits/stdc++.h>
using namespace std;
int solve(){
   string str;
   cin>>str;
   int a=-1,b=-1,c=-1,mn=INT_MAX,n=str.size();
   for(int i=0;i<n;i++){
       if(str[i]=='1')  a=i;
       else if(str[i]=='2') b=i;
       else if(str[i]=='3') c=i;
       if(a!=-1&&b!=-1&&c!=-1){
           int dist=max(max(a,b),c)-min(min(a,b),c);
           mn=min(mn,dist);
       }
   }
   if(mn==INT_MAX)  return 0;
   else  return mn+1;
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