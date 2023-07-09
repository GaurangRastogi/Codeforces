#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve(){
    
    string str[3];
    
    for(int i=0;i<3;i++){
        cin>>str[i];
    }

    if(str[0][0]!='.'&&str[0][0]==str[1][1] && str[1][1]==str[2][2]){
        cout<<str[0][0]<<endl;
        return;
    }
    else if(str[0][2]!='.'&&str[0][2]==str[1][1] && str[1][1]==str[2][0]){
        cout<<str[1][1]<<endl;
        return;
    }


    //each row
    for(int i=0;i<3;i++){
        if(str[i][0]!='.'&&str[i][0]==str[i][1] && str[i][1]==str[i][2]){
            cout<<str[i][0]<<endl;
            return;
        }
    }

    //each column
    for(int i=0;i<3;i++){
        if(str[0][i]!='.'&&str[0][i]==str[1][i] && str[1][i]==str[2][i]){
            cout<<str[0][i]<<endl;
            return;
        }
    }

    cout<<"DRAW"<<endl;
    return;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}