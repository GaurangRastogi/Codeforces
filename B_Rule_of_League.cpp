#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve2(int n,int y){
    ll st=2,temp=(n-1)/y;
    for(int j=0;j<temp;j++){
        for(int i=0;i<y;i++){
            cout<<st<<" ";
        }
        st+=y;
    }
    cout<<endl;
    return;
}
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    if((x!=0&&y!=0)||(x==0&&y==0)){
        cout<<-1<<endl;
        return;
    }
    else if(x==0){
        if((n-1)%(y)==0){
            solve2(n,y);

        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else{
        if((n-1)%(x)==0){
            solve2(n,x);
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
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