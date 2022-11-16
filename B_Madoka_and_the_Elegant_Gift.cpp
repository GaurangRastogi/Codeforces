#include<iostream>
using namespace std;
string solve(){
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    if(n==1||m==1)  return "YES";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+1<m&&i+1<n)
                if((arr[i][j]-'0')+(arr[i+1][j]-'0')+(arr[i+1][j+1]-'0')+(arr[i][j+1]-'0')==3)  
                    return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t; 
    while(t--){
        cout<<solve()<<endl;
    }
}