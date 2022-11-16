#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int solve(){
    string s;
    cin>>s;
    int x,carry,count=0;
    cin>>x;
    string hr=s.substr(0,2);
    string min=s.substr(3,2);
    int a=stoi(hr);
    int b=stoi(min);
    //cout<<gcd(x,1440)<<endl;
    int num=(1440*x)/gcd(x,1440);
    int iteration=num/x;
    //cout<<iteration<<endl;
    for(int i=0;i<iteration;i++){
        b=b+x;
        carry=b/60;
        b%=60;
        a=a+carry;
        a=a%24;
       // cout<<a<<" "<<b<<endl;
        if(b%10==((a/10)%10)&&((b/10)%10==a%10)){
            count++;
           //cout<<a<<" "<<b<<endl;
        }
    }
    return count;
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