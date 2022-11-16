#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string dig,str="";
    cin>>dig;
    vector<int>v(n,0);
    int carry,flag=0;
    for(int i=0;i<n;i++){
        v[i]=dig[i]-'0';
        str+='1';
    }
    reverse(v.begin(),v.end());
    vector<int>last,ans;
    if(str>=dig){
        for(int i=0;i<n;i++) 
            last.push_back(2);
        for(int i=0;i<n;i++){
            //cout<<v[i]<<" "<<last[i]<<" ";
            if(v[i]<=last[i])   ans.push_back(last[i]-v[i]);
            else{
                ans.push_back(10+last[i]-v[i]);
                last[i+1]--;
            }
            //cout<<last[i+1]<<" "<<endl;
        }
    }
    else{
        for(int i=0;i<=n;i++)   
            last.push_back(1);
        for(int i=0;i<n;i++){
            //cout<<v[i]<<" "<<last[i]<<" ";
            if(v[i]<=last[i])   ans.push_back(last[i]-v[i]);
            else{
                ans.push_back(10+last[i]-v[i]);
                last[i+1]--;
            }
            //cout<<last[i+1]<<endl;
        }
    }
    for(int i=n-1;i>=0;i--) cout<<ans[i];
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