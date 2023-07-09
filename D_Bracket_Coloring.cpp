#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod=1e9+7;
 
bool isRBS(string s){
    ll count=0;
    for(auto i:s){
        if(i=='(')
            count++;
        else
            count--;
        if(count<0)
            return false;
    }
    return count==0;
}

bool validSeq(string s){
    ll count=0;
    for(auto i:s){
        if(i=='(')
            count++;
        else
            count--;
    }
    return count==0;
}
void solve( ){

    ll n;
    cin>>n;

    string str;
    cin>>str;

    string rev=str;
    reverse(rev.begin(),rev.end());

    if(validSeq(str)==false){
        cout<<-1;
    }

    else if(isRBS(str)||isRBS(rev)){
        cout<<1<<endl;
        for(int i=0;i<n;i++)
            cout<<1<<" ";
    }

    else{
        cout<<2<<endl;

        vector<int>ans(n,1);
        int count=0;
        for(int i=0;i<n;i++){
            if(str[i]=='(')
                count++;
            else{
                if(count<=0)
                    ans[i]=2;
                count--;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(str[i]==')')
                count++;
            else{
                if(count<=0)
                    ans[i]=2;
                count--;
            }
        }

        for(auto i:ans)
            cout<<i<<" ";
    }
    cout<<endl;
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--)
    solve();
    return 0;
}