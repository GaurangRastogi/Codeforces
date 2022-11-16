#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>ans{};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                ans.push_back({j+1,j+2});
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
            else if((a[j]==a[j+1])&&b[j]>b[j+1]){
                ans.push_back({j+1,j+2});
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(b[i]>b[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}




// int n;
//     cin>>n;
//     int a[n],b[n];
//     unordered_map<int,int>um{};
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         um[a[i]]=i;
//     }
//     for(int i=0;i<n;i++)    cin>>b[i];
//     int c[n];
//     for(int i=0;i<n;i++)    c[i]=b[i];
//     sort(a,a+n);
//     sort(b,b+n);
//     vector<pair<int,int>>vp{};
//     for(int i=0;i<n;i++){
//         //cout<<a[i]<<" "<<b[i]<<endl;
//         if(b[i]==c[um[a[i]]]&&i!=um[a[i]]){
//             vp.push_back({um[a[i]]+1,i+1});
//             um[a[um[a[i]]]]=um[a[i]];
//             c[um[a[i]]]=c[i];
//         }
//         else if(i!=um[a[i]]){
//             cout<<-1<<endl;
//             return;
//         }
//     }
//     cout<<vp.size()<<endl;
//     for(auto i:vp)  cout<<i.first<<" "<<i.second<<endl;
//     return;