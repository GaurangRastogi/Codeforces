#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,j=1;
    char ch='a';
    stack<char>st{};
    cin>>n>>k;
    int max_distinct=ceil(float(n)/2);
    if(max_distinct<k){
        cout<<-1<<endl;
        return;
    }
    else{
    while(j<=max_distinct){
        for(int i=1;i<=k&&j<=max_distinct;i++){
            cout<<char(ch);
            st.push(ch);
            ch++;
            j++;
        }
        ch='a';
    }
        if(n%2==1)  st.pop();
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
    cout<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  
        solve();
    return 0;
}