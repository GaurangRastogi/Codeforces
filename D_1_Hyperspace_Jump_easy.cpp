#include<bits/stdc++.h>
using namespace std;
void func(string &str,unordered_map<int,float>&um1,unordered_map<float,int>&um2,int &ind){
    float a,b,c;
    int i,temp;
    for(i=1;str[i]!='+';i++){
        continue;
    }
    a=stof(str.substr(1,i-1));
    i++;
    temp=i;
    for(i;str[i]!=')';i++){
        continue;
    }
    b=stof(str.substr(temp,i-temp));
    i+=2;
    temp=i;
    c=stof(str.substr(temp,str.size()-temp));
   // cout<<a<<" "<<b<<" "<<c<<endl;
    float val=(a+b)/c;
    //cout<<val<<endl;
    um1[ind]=val;
    um2[val]++;
}
void solve(){
    int n;
    string str;
    cin>>n;
    unordered_map<int,float>um1{};
    unordered_map<float,int>um2{};
    for(int i=0;i<n;i++){
        cin>>str;
        func(str,um1,um2,i);
    }
    for(int i=0;i<n;i++){
        cout<<um2[um1[i]]<<" ";
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