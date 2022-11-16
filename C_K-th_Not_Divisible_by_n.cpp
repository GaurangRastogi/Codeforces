#include<bits/stdc++.h>
using namespace std;
int solve(){
    long long int n,k;
    cin>>n>>k;
    long long int sum=k+k/n;
    while((k+sum/n)%n==0||(((k+sum/n)-((k+sum/n)/n)!=k))){
        sum=k+sum/n;
        //
        cout<<k+sum/n<<" "<<((k+sum/n)-((k+sum/n)/n))<<" "<<k<<endl;
    }
    return k+sum/n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}