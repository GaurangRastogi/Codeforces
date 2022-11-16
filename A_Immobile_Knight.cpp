#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x==1)
        cout<<1<<" "<<y<<endl;
    else if(y==1)
        cout<<x<<" "<<1<<endl;
    else if(y==2&&x==2){
        cout<<x<<" "<<y<<endl;
    }
    else if(x==3&&y==3){
        cout<<2<<" "<<2<<endl;
    }
    else if(x==3&&y==2){
        cout<<2<<" "<<1<<endl;
    }
    else if(x==2&&y==3){
        cout<<1<<" "<<2<<endl;
    }
    else{
        cout<<x<<" "<<y<<endl;
    }
    return;

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