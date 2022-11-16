#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    string str;
    cin>>str;
    int l=0,h=n-1;
    while(l<h){
        if(str[l]!=str[h]) {
            count++;
        } 
        l++;
        h--;
    }
    cout<<ceil(float(count)/float(2))<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}