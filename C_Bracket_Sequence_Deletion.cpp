#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    int l=0,r,count=0;
    while(l+1<n){
        if(st[l]=='('||(st[l]==')'&&st[l+1]==')'))  l+=2;
        else{
            r=l+1;
            while(st[r]!=')'&&r<n){
                r++;
            }
            if(r==n)
                break;
            l=r+1;
        }  
        count++; 
    }
    cout<<count<<" "<<n-l<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
}