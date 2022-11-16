#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(int num){
     if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num% i == 0)
            return false;
 
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    ll x,y;
    for(int i=0;i<t;i++){
        cin>>x;
        y=sqrt(x);
        if((x-y*y==0)&&isPrime(y)){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}