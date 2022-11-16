#include<bits/stdc++.h>
using namespace std;
int solve(){
    map<int,int>mp{};
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]=i+1;
    }
    int a,b,c,d,e,y;
    a=mp.begin()->second;
    b=mp.rbegin()->second;
    if(a<b){x=b;y=a;}
    else{x=a;y=b;}
    //cout<<x<<" "<<y<<" "<<n<<endl;
    c=x;
    d=n-y+1;
    e=y+n-x+1;
    return min(d,min(c,e));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}