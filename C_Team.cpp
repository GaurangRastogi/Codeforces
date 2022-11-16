#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll one,zero;
    cin>>zero>>one;
    ll l=zero-1,h=2*zero+2;
    if(!(one>=l&&one<=h)){
        cout<<-1<<endl;
        return;
    }
    if(one<zero){
        cout<<'0';
        for(int i=0;i<one;i++)
            cout<<"10";
        cout<<endl;
        return;
    }
    else if(zero==one){
        for(int i=0;i<zero;i++)
            cout<<"10";
        cout<<endl;
    }
    else{
        ll temp=one-zero-1;
        for(int i=0;i<=zero;i++){
            if(temp){
                cout<<'1';
                temp--;
            }
            if(i<zero)
                cout<<"10";
            else
                cout<<"1";
        }
        cout<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    solve();
    return 0;
}