#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x=n-1,count=0;
    vector<int>arr(n+1,0);
    unordered_map<int,int>um{};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        um[arr[i]]=i+1;
    }
    while(x>0&&count<1000){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(um[arr[j]]>=i&&(um[arr[j]]-i)<=x){
                    for(int k=um[arr[j]];k>i;k--){
                        um[arr[k]]++;
                        swap(arr[k],arr[k-1]);
                        x--;
                        if(x<0)
                            break;
                    }
                    um[arr[j]]=i;
                    break;
                }
                if(x<0)
                    break;
            }
            count++;
        }
    }
    arr.erase(arr.begin());
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
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