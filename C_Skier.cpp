#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
   ll sum=0;
   string str;
   cin>>str;
   ll x=0,y=0;
   set<pair<pair<ll,ll>,pair<ll,ll>>>st{};

   for(int i=0;i<str.size();i++){
        ll a=x,b=y;
        if(str[i]=='E')
            x++;
        else if(str[i]=='W')
            x--;
        else if(str[i]=='N')
            y++;
        else 
            y--;
        //cout<<"{"<<a<<","<<b<<"}"<<"   "<<"{"<<x<<","<<y<<"}"<<"       ";
        if(st.find({{x,y},{a,b}})==st.end()){
            sum+=5;
        }
        else{
            sum++;
        }   
        st.insert({{a,b},{x,y}});
        st.insert({{x,y},{a,b}});
        //cout<<sum<<endl;
   }

    return sum;
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