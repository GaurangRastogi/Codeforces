#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int l=1,h=n-1;
    long long int suml=arr[0],sumh=0;
    if(suml<sumh)    return "YES";
    // for(int i=0;i<n;i++)    cout<<arr[i]<<" ";
    // cout<<endl;
    while(l<h){
        //cout<<l<<" "<<h<<" "<<arr[l]<<" "<<arr[h]<<endl;
        suml+=arr[l];
        sumh+=arr[h];
        l++;
        h--;
        // cout<<suml<<" "<<sumh<<endl;
        if(suml<sumh)    return "YES";
    }
    return "NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }   
}