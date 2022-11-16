#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k;
    cin>>n>>k;
    int min_val=0;
    string s;
    cin>>s;
    for(int i=0;i<k;i++){
        if(s[i]=='W')   min_val++;
    }
    int a=1,b=k+1,count=min_val;
    if(min_val==0)  return 0;
    while(a<=n-k){
        if(s[a-1]=='W')    count--;
        if(s[k+a-1]=='W')    count++;
        min_val=min(count,min_val);
        //cout<<a<<" "<<a+k-1<<" "<<endl;
        a++;
    }
    return min_val;
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