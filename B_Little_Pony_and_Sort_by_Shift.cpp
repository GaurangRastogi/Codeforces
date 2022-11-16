#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num,sum,temp=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++)
        if(arr[i]>arr[i+1]) sum=i,temp++;
    
    if(arr[num-1]>arr[0]) sum=num-1,temp++;
    if(temp==0) cout<<0<<endl;
    else if(temp>1)    cout<<-1<<endl;
    else cout<<num-1-sum<<endl;
}