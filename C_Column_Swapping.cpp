#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,m,flag=0,a=-1,x=-1;
    cin>>n>>m;
    vector<vector<ll>>v(n,vector<ll>(m,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<m-1;j++){
            if(v[i][j]>v[i][j+1]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            continue;
        else{
            vector<ll>b=v[i];
            sort(b.begin(),b.end());
            for(int k=0;k<m;k++){
                if(v[i][k]!=b[k]){
                    if(a==-1){
                        a=k;
                    }
                    else if(x==-1){
                        x=k;
                    }
                    else    {
                        cout<<-1<<endl;
                        return;
                    }   
                }
            }
            break;
        }
        if(flag==1)
            break;
    }
    if(a==-1&&x==-1){
        cout<<"1 1"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        swap(v[i][a],v[i][x]);
        for(int j=0;j<m-1;j++){
            if(v[i][j]>v[i][j+1]){
                cout<<-1<<endl;
                return;
            }
        }
    }

    cout<<a+1<<" "<<x+1<<endl;
    return;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)  
    solve();
    return 0;
}