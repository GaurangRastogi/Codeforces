#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int n,odd_count=0,even_count=0,mn=INT_MAX,x,y;
    cin>>n>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>x;
        odd_count+=x%2;
        even_count+=1-x%2;
    }
    if(y==n)    return odd_count%2==1;
    else{
        if(odd_count==0)  return false;
        else if(y%2==0&&even_count==0)  return false;
        else return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        if(solve()==true)   cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}