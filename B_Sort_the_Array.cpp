#include<bits/stdc++.h>
using namespace std;
int findl(int arr[],int n){
    for(int i=0;i<=n;i++){
        if(arr[i]>arr[i+1]) return i;
    }
    return 1;
}
int findr(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]) return i;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=INT_MIN;
    arr[n+1]=INT_MAX;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int low=findl(arr,n);
    int high=findr(arr,n);
    int temp1=low,temp2=high;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0;i<=n;i++){
        if(arr[i]>arr[i+1]){cout<<"no";return 0;} 
    }
    cout<<"yes"<<endl;
    cout<<temp1<<" "<<temp2;
    return 0;
}