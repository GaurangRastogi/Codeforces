#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll a1,a2,a3,a4;

    cin>>a1>>a2>>a3>>a4;
    if(a1==0){
        cout<<1<<endl;
        return;
    }

    //tutorial formula :(
    cout<<a1+min(a2,a3)*2+min(a1+1,abs(a2-a3)+a4)<<endl;
    return;

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

    cout.flush();
    return 0;
}
