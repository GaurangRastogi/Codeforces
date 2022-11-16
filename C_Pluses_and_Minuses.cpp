// res = 0
// for init = 0 to inf
//     cur = init
//     ok = true
//     for i = 1 to |s|
//         res = res + 1
//         if s[i] == '+'
//             cur = cur + 1
//         else
//             cur = cur - 1
//         if cur < 0
//             ok = false
//             break
//     if ok
//         break
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve(){
    string str;
    cin>>str;
    ll res=0,curr,init=0;
    ll n=str.size();
    bool temp;
    for(init,init<=n;init++){
        curr=init;
        temp=true;
        for(int i=0;i<n;i++){
            res++;
            if(str[i]=='+')
                curr++;
            else
                curr--;

            if(curr<0){
                temp=false;
                break;
            }
        }
        if(temp)
            break;
    }
    cout<<res<<endl;
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

/*
void solve(){
    string str;
    cin>>str;
    ll n=str.size();
    vector<int>plus(n+1,0),minus(n+1,0);
    for(int i=1;i<=n;i++){
        plus[i]=plus[i-1]+(str[i-1]=='+');
        minus[i]=minus[i-1]+(str[i-1]=='-');
    }
    
}*/