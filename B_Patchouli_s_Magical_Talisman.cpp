#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int i=0;
    while(n%2==0){
        i++;
        n/=2;
    }
    return i;
}
int solve(){
    int n,odd_count=0,even_count=0,mn=INT_MAX;
    cin>>n;
    int arr[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        odd_count+=arr[i]%2;
        even_count+=1-arr[i]%2;
    }
    if(odd_count>=1)    return even_count;
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                mn=min(mn,func(arr[i]));
            } 
        }
        return mn+even_count-1;
    }
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