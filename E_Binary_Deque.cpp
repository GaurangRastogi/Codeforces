#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,s,x,curr=0;
    cin>>n>>s;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        curr+=v[i];
    }
    if(curr<s)  return -1;
    int ind=0,sum=0;
    while(sum<s){
        sum+=v[ind];
        ind++;
    }
    int mx=ind,st=0,temp=mx;
    //cout<<ind<<endl;
    for(int i=ind;i<n;i++){
        if(v[i]==0) temp++;
        else{
            while(v[st]==0){
                st++;
                temp--;
            }
            st++;
        }
        mx=max(mx,temp);
        //cout<<i<<" "<<temp<<" "<<mx<<endl;
    } 
    return n-mx;
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