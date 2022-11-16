#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,firstzero=-1,secondone=-1,firstone=-1,i=0,flag=-1;
    cin>>n;
    while(flag<1){
        if(n%2==0){
            if(firstzero==-1)   firstzero=i;
        }
        else{
            if(firstone==-1)    firstone=i;
            else if(secondone==-1)  secondone=i;
        }
        n/=2;
        i++;
        if(n==0) flag++;
    }
    if(secondone==-1){
        return pow(2,firstone)+pow(2,firstzero);
    }
    else return pow(2,firstone);
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