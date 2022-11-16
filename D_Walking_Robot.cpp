#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,a,b,count=0;
    cin>>n>>a>>b;
    char s[n];
    int init=b;
    for(int i=0;i<n;i++)    
        cin>>s[i];
    for(int i=0;i<n;i++){
        //cout<<i<<" "<<a<<" "<<b<<endl;
        if(a==0&&b==0)  return count;
        if(s[i]=='0'){
            if(b==0)    a--;
            else b--;
        }
        else{
            if(a==0)    b--;
            else if(b==init)    b--;      
            else{
                a--;
                b++;
            }
        }
        count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
    return 0;
}