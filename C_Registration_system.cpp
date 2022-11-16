#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string st;
    cin>>n;
    unordered_map<string,int>um;
    for(int i=0;i<n;i++){
        cin>>st;
        um[st]++;
        if(um[st]-1==0) cout<<"OK";
        else cout<<(st+to_string(um[st]-1));
        cout<<endl;
    }
    return 0;
}