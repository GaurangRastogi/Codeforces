#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n;
    map<int,int>um{};
    for(int i=0;i<n;i++){
        cin>>x;
        um[x]++;
    }
    for(auto i:um){
        if(i.second<2) {
            cout<<-1<<endl;
            return ;
        }
    }
    long long int sum,temp=0;
    for(auto i:um){
        sum=temp+1;
        //cout<<temp<<" "<<sum<<endl;
        temp+=i.second;
        cout<<temp<<" ";
        while(sum<temp) {
            cout<<sum<<" ";
            sum++;
        }
        //cout<<temp<<" "<<sum<<endl;
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