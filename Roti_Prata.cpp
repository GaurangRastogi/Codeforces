#include<bits/stdc++.h>
using namespace std;

void solve(){
   int prata;
   cin>>prata;

   int log;
   cin>>log;

   vector<int>vlog(log);
   for(int i=0;i<log;i++){
        cin>>vlog[i];
        // cout<<vlog[i]<<" ";
   }

   int st=0,end=1e9;

   while(st+1<end){
        int mid=(st+end)/2,count=0,time,curr;
        for(int i=0;i<log;i++){
            time=mid;
            curr=vlog[i];
            while(time>=curr){
                time-=curr;
                curr+=vlog[i];
                count++;
            }
        }
        // cout<<endl;
        if(count<prata){
            st=mid;
        }
        else{
            end=mid;
        }
   }
   
   cout<<end<<endl;
    
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