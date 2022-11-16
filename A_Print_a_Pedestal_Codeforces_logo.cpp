#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    float h1_f=(float)(n+3)/3;
    int h1=ceil(h1_f);
    int left=n-h1;
    float h2_f=(float)(left+1)/2;
    int h2=ceil(h2_f);
    int h3=left-h2;
    cout<<h2<<" "<<h1<<" "<<h3<<endl;
    return 0;
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