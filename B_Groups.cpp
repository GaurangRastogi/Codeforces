#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
string solve(){    
    ll n,a,b,c;
    cin>>n;
    vector<vector<ll>>v(n,vector<ll>(5,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++)    
            cin>>v[i][j];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            a=0;
            b=0;
            c=0;
            for(int k=0;k<n;k++){
                a+=v[k][i];
                b+=v[k][j];
                c+=(v[k][i]|v[k][j]);
            }
            if(a>=n/2&&b>=n/2&&c==n)    
                return "YES";
        }
    }
    return "NO";
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