#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){

    ll n;
    cin>>n;

    string str1,str2;
    cin>>str1>>str2;

    ll change=0,zp=0,op=0;
    for(int i=0;i<n;i++){
        zp+=(str1[i]=='0');
        op+=(str1[i]=='1');
    }
    

    for(int i=n-1;i>=0;i--){
        if(((str1[i]-'0')+change)%2==(str2[i]-'0')){
            zp=zp-(str1[i]=='0');
            op=op-(str1[i]=='1');
        }
        else{
            if((op!=zp)){
                cout<<"NO"<<endl;
                return;
            }
            else{
                change=(change+1)%2;
                if(str1[i]=='0')
                    zp--;
                else
                    op--;
            }

        }
    }

    cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}
