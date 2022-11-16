#include<bits/stdc++.h>
using namespace std;
int solve(){
    int x,y;
    cin>>x>>y;
    if(x<y) return y-x;
    else if(x==y)   return 0;
    else{
        int temp=x-y;
        if(temp%2==1)   return (temp+1)/2+1;
        else return temp/2;
    }
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