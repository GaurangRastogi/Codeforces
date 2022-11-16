#include<bits/stdc++.h>
using namespace std;
bool check_equal(string st){
    char curr=st[0];
    for(int i=1;i<=st.size();i++){
        if(i%3!=0){
            if(st[i-1]!=curr) return false;
        }
    }
    return true;
}
bool check_decreasing(string st){
    char curr=st[0];
    for(int i=2;i<=st.size();i++){
        if(i%3!=0){
            if(st[i-1]>=curr)    return false;
            else{
                curr=st[i-1];
            }
        }
    }
    return true;
}
int main(){
    int n,x,count;
    cin>>n;
    string names[n],st;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>names[i];
        arr[i][0]=0;
        arr[i][1]=0;
        arr[i][2]=0;
        for(int j=0;j<x;j++){
            cin>>st;
            if(check_equal(st)) arr[i][0]++;
            else if(check_decreasing(st)) arr[i][1]++;
            else arr[i][2]++;
        }
        //cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<endl;
    }
    vector<int>mx;
    for(int i=0;i<3;i++){
        x=0;
        for(int j=0;j<n;j++){
            x=max(x,arr[j][i]);
        }
        mx.push_back(x);
    }
    for(int i=0;i<3;i++){
        count=0;
        if(i==0) cout<<"If you want to call a taxi, you should call: ";
        else if(i==1) cout<<"If you want to order a pizza, you should call: ";
        else  cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";     
        for(int j=0;j<n;j++){
            if(mx[i]==arr[j][i]&&count==0){
                cout<<names[j];
                count++;
            }
            else if(mx[i]==arr[j][i])  cout<<", "<<names[j];
        }
        cout<<"."<<endl;
    }
}