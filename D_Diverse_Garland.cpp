#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=1;i<n-1;i++){
        if(arr[i-1]==arr[i+1]&&arr[i]==arr[i+1]){
            if(arr[i-1]=='R')   arr[i]='G';
            else if(arr[i-1]=='G')   arr[i]='B';
            else arr[i]='R';
            count++;
        }
        else if(arr[i-1]==arr[i]){
            if(arr[i-1]=='R'&&arr[i+1]=='B'||arr[i-1]=='B'&&arr[i+1]=='R')  arr[i]='G';
            else if(arr[i-1]=='G'&&arr[i+1]=='B'||arr[i-1]=='B'&&arr[i+1]=='G') arr[i]='R';
            else arr[i]='B';
            count++;
        }
        else continue;
    }
    if(arr[n-2]==arr[n-1]){
        if(arr[n-2]=='R')   arr[n-1]='G';
        else if(arr[n-2]=='G')  arr[n-1]='B';
        else arr[n-1]='R';
        count++;
    }
    cout<<count<<endl<<arr;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}