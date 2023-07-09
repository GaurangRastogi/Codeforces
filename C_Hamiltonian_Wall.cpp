#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool utility(vector<string>&v,ll i,ll j,ll firstElementofCol,ll n){
    if(j==n)
        return true;
    else if(v[i][j]=='W')
        return false;

    else{
        if(firstElementofCol&&v[1-i][j]=='B'){
            return utility(v,1-i,j,0,n);
        }
        return utility(v,i,j+1,1,n);
    }
    
}
bool solve()
{
    ll n;
    cin>>n;
    
    vector<string>v(2);
    cin>>v[0]>>v[1];


    return utility(v,0,0,1,n)|utility(v,1,0,1,n);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        if(solve())
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    return 0;
}