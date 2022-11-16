#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(){
    string str;
    cin>>str;  
    if(str.size()%2==1) 
        return "NO";
    ll a=-1,b=-1,temp=str.size()/2,n=str.size();
    ll open=0,closed=0,flag=0;
    for(int i=0;i<n;i++){
        if(str[i]=='(') 
            open++;
        else if(str[i]==')')
            closed++;
    }
   // cout<<open<<closed;
    if(n-open-closed<=1||open==temp||closed==temp)
        return "YES";
    for(int i=0;i<n;i++){
        if(open<temp&&str[i]=='?'){
            str[i]='(';
            open++;
            a=i;
        }
    }
    for(int i=0;i<n;i++){
        if(closed<temp&&str[i]=='?'){
            str[i]=')';
            closed++;
            if(flag==0){
                b=i;
                flag=1;
            }
        }
    }
    //cout<<a<<b<<endl;
    swap(str[a],str[b]);
    stack<char>st{};
    for(int i=0;i<n;i++){
        if(str[i]=='(')
            st.push(str[i]);
        else{
            if(st.empty()){
                return "YES";
            }
            st.pop();
        }
    }
    return "NO";
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