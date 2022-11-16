#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,count=0;
    cin>>n;
    vector<string>v(n,"");
    set<char>str{};
    for(int i=0;i<10;i++)
        str.insert(i+'0');
  
    for(int i=0;i<n;i++){
        cin>>v[i];
        str.erase(v[i][0]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                v[i][0]=*str.begin();
                str.erase(str.begin());
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    for(auto i:v)
        cout<<i<<endl;
    
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