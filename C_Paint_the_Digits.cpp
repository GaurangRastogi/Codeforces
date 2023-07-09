#include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

bool utility(string str)
{
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i - 1] > str[i])
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    string str;
    cin >> str;
    int j,ind;

    for (int i = 1; i < 10; i++)
    {
        // so number less then i at one place, while >=i is 2

        string one = "", two = "",mid="";
        j=0;
        ind=-1;
        for (auto ch : str)
        {
            if (ch - '0' < i)
            {
                ind=j;
            }
            j++;
        }
        j=0;
        for(auto ch:str){
            if(i==ch-'0'){
                if(j<ind)
                    two+=ch;
                else
                    one+=ch;
            }
            else if(ch-'0'<i){
                one+=ch;
            }
            else
                two+=ch;
            j++;
        }

        // cout<<one<<" "<<two<<endl;
        string final_ = one + mid+two;
        if (utility(final_))
        {
            string ans = "";
            j=0;
            for (auto ch : str)
            {
                if (ch - '0' < i)
                {
                    ans += "1";
                }
                else if(ch-'0'>i)
                {
                    ans += "2";
                }
                else{
                    if(j<ind)
                        ans+="2";
                    else
                        ans+="1";
                }
                j++;
            }
            cout << ans << endl;
            return;
        }
    }

    cout << "-" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}