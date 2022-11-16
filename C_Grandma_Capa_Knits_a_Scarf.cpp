#include<bits/stdc++.h>
using namespace std;
int pal(string str,char c,int n){
    int l=0,h=n-1,count=0;
    while(l<h){
        if(str[l]==str[h]){
            h--;
            l++;
        }
        else{
            if(str[l]==c){count++;l++;}
            else if(str[h]==c){count++;h--;}
            else return INT_MAX;
        }
    }
    return count;
}
void solve(){
   int n,mn=INT_MAX;
   cin>>n;
   string str;
   cin>>str;
   for(char c='a';c<='z';c++){
       mn=min(mn,pal(str,c,n));
   }
   if(mn<INT_MAX)
   cout<<mn<<endl;
   else cout<<-1<<endl;
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