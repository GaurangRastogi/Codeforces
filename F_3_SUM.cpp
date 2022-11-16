#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,x;
    cin>>n;
    unordered_map<int,int>um{};
    for(int i=0;i<n;i++){
        cin>>x;
        x%=10;
        if(um[x]<3)
            um[x]++;
    }
    vector<int>v{};
    for(int i=0;i<=9;i++){
        for(int j=1;j<=um[i];j++){
            v.push_back(i);
        }
    }
    int n1=v.size(),sum;
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            for(int k=j+1;k<n1;k++){
                sum=v[i]+v[j]+v[k];
                if(sum%10==3)   return "YES";
            }
        }
    }
    return "NO";
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