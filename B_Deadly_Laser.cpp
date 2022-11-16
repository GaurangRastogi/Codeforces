#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(){
    int n,m;
    cin>>n>>m;
    int sx,sy;
    cin>>sx>>sy;
    int d;
    cin>>d;
    if(((sy-1)>d&&(n-sx)>d)||((sx-1)>d&&(m-sy)>d)){
        return (n-1)+(m-1);
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){

    cout<<solve()<<endl;
    }
    return 0;
}
