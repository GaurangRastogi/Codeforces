#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



string solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    bool e=false,f=false,g=false,h=false;

    return ((a<b&&c<d&&b<d&&a<c)||(c<a&&a<b&&d<b&&c<d)||(d<c&&c<a&&b<a&&d<b)||(b<d&&a<c&&b<a&&d<c))?"YES":"NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        cout<<solve()<<endl;
    }
    
    return 0;
}