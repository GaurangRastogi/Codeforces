#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(){
    string str;
    cin>>str;
    map<char,int>mp{};
    mp[str[0]]++;
    mp[str[1]]++;
    cin>>str;
    mp[str[0]]++;
    mp[str[1]]++;

    if(mp.size()==4)
        return 3;
    else if(mp.size()==3)
        return 2;
    else if(mp.size()==2)
        return 1;
    else return 0;
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
