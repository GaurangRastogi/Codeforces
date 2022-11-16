#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    vector<int>diff{};
    for(int i=0;i<n-1;i++){
        diff.push_back(v[i+1]-v[i]);
    }

    sort(diff.begin(),diff.end());
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}