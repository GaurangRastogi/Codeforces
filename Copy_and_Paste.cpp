#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,m,temp,temp_sum=0;
    cin>>n>>m;
    string str;
    cin>>str;
    ll sum=0,ind;
    for(auto i:str){
        sum+=i-'0';
    }
    if(!sum)
        return m*n;
    if(sum==n) 
        return 1;
    if(m%2&&sum%2)
        return 0;
    if(m%2==0){
        ind=0;
        while(str[ind]!='1')
            ind++;
        temp=ind;
        ind=n-1;
        while(str[ind]!='1')
            ind--;
        temp+=n-ind-1;
        return temp+1;
    }
    else{
        ind=0;
        while(temp_sum<sum/2){
            temp_sum+=str[ind++]-'0';
        }
        temp=ind;
        for(int i=ind;i<n;i++){
            if(str[i]=='1')
                return i-temp+1;
        }
        return 0;
    }
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