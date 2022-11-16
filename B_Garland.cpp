#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string st,str;
    unordered_map<char,int>um1,um2;
    cin>>st>>str;
    for(auto i:st)  um1[i]++;
    for(auto i:str) um2[i]++;
    int sum=0;
    for(char ch='a';ch<='z';ch++){
        if(um2[ch]!=0&&um1[ch]==0){cout<<-1;return 0;}
    }
    for(char ch='a';ch<='z';ch++){
        if(um2[ch]!=0) sum+=min(um1[ch],um2[ch]);
    }
    cout<<sum;

}