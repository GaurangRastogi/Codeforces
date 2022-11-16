#include<bits/stdc++.h>
using namespace std;
char solve(){
    int n;
    cin>>n;
    unordered_map<char,int>um{};
    string str;
    for(int i=0;i<=2*n;i++){
        cin>>str;
        for(auto i:str) um[i]++;
    }
    for(char i='a';i<='z';i++){
        if(um[i]%2==1)  return i;
    }
    return 'a';
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