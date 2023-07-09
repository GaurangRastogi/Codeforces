#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin>>n;

    ll low=1,high=n,val1,val2;

    while(low+1<high){
        cout<<"? "<<low<<" "<<high<<endl<<endl;
        cin>>val1;
        ll mid=(low+high)/2;
        cout<<"? "<<mid<<" "<<high<<endl<<endl;
        cin>>val2;
        if(val1!=val2){
            high=mid;
        }
        else{
            low=mid;
        }
        
    }
    cout<<"! "<<low<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    cout.flush();
    return 0;
}
