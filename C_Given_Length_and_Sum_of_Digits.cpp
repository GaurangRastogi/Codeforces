#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void smallest(ll n ,ll sum){
    if(n*9<sum){
        cout<<-1;
        return;
    }
    if(sum==0){
        if(n>1)
            cout<<-1;
        else    cout<<0;
        return;
    }
    string str="";
    str+="1";
    for(int i=1;i<n;i++){
        str+="0";
    }
    sum-=1ll;
    int ind=n-1,curr=9;
    while(sum>0){
        if(sum>=curr){
            str[ind]+=curr;
            ind--;
            sum-=curr;
        }
        else   curr=max(0,curr-1);
    }
    cout<<str;
}
void largest(ll n,ll sum){
    if(n*9<sum){
        cout<<-1;
        return;
    }
    if(sum==0){
        if(n>1)
            cout<<-1;
        else    cout<<0;
        return;
    }
    string str="";
    for(int i=0;i<n;i++){
        str+="0";
    }
    int curr=9;
    for(int i=0;i<n;i++){
        while(sum<curr){
            curr=max(curr-1,0);
        }
        str[i]+=curr;
        sum-=curr;
        if(sum==0){
            cout<<str;
            return;
        }
    }
    cout<<str;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    ll n,sum;
    cin>>n>>sum;
    smallest(n,sum);
    cout<<" ";
    largest(n,sum);
    return 0;
}