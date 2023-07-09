#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    string str;
    cin>>str;

    set<char>st;
    for(auto ch:str){
        st.insert(ch);
    }

    if(st.size()==1){
        cout<<-1<<endl;
    }
    else{
        cout<<str.size()-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
