#include<bits/stdc++.h>
using namespace std;
void display(int num,int ind){
    for(int i=0;i<ind;i++)  cout<<4;
    for(int i=0;i<num;i++)  cout<<7;
}
int main(){
    int n;
    cin>>n;
    if(n%7==0){
        display(n/7,0);
        return 0;
    }
    for(int i=1;i<7;i++){
        n-=4;
        if(n<0) break;
        if(n%7==0&&n>=0){
            display(n/7,i);
            return 0;
        }
    }
    cout<<-1;
    return 0;
}