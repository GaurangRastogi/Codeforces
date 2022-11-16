#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int od_c=0,ev_c=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        od_c+=x%2;
        ev_c+=1-x%2;
    }
    return min(od_c,ev_c);

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