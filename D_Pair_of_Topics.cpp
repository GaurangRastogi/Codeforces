#include<bits/stdc++.h>
using namespace std;
long long int solve(){
    int n;
    cin>>n;
    vector<int>a(n,0),b(n,0);
    vector<int>diff(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        diff[i]=a[i]-b[i];
    sort(diff.begin(),diff.end());
    long long int count=0;
    for(int i=0;i<n;i++){
       // cout<<diff[i]<<" ";
        count+=diff.end()-upper_bound(diff.begin()+(i+1),diff.end(),-1*diff[i]);
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve()<<endl;
    return 0;
}