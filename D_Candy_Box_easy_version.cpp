#include<bits/stdc++.h>
using namespace std;
bool comparator(int a,int b){
    return a>b;
}
long long int solve(){
    int n,x;
    cin>>n;
    unordered_map<int,int>um{};
    for(int i=0;i<n;i++){
        cin>>x;
        um[x]++;
    } 
    vector<int>v;
    for(auto i:um)  
        v.push_back(i.second);
    sort(v.begin(),v.end(),comparator);
    long long int sum=v[0],flag=v[0];
    for(int i=1;i<v.size();i++){
       if(v[i]>=flag){
        sum+=max(0ll,flag-1);
        flag--;
       }
       else{
        flag=v[i];
        sum+=flag;
       }
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