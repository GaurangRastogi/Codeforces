#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,k,l,h,count=0;
    cin>>n>>k;
    string str;
    cin>>str;
    l=0;h=n-1;
    while(l<=h){
        if(str[l]!=str[h])  count++;
        l++;
        h--;
    }
    if(count==k||((k-count)%2==0&&count<=k)||(n%2==1&&count<=k)) return "YES";
    else return "NO";

}
int main(){
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}