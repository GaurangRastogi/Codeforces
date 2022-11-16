#include<bits/stdc++.h>
#define M 1000003
#define X 400
using namespace std;
void assign(bitset<X>&b,char ch,int &j){
    if(ch=='>'){
        b[j++]=0;
        b[j++]=0;
        b[j++]=0;
        b[j++]=1;
    }
    else if(ch=='<'){
        b[j++]=1;
        b[j++]=0;
        b[j++]=0;
        b[j++]=1;
    }
    else if(ch=='+'){
        b[j++]=0;
        b[j++]=1;
        b[j++]=0;
        b[j++]=1;
    }
    else if(ch=='-'){
        b[j++]=1;
        b[j++]=1;
        b[j++]=0;
        b[j++]=1;
    }
    else if(ch=='.'){
        b[j++]=0;
        b[j++]=0;
        b[j++]=1;
        b[j++]=1;
    }
    else if(ch==','){
        b[j++]=1;
        b[j++]=0;
        b[j++]=1;
        b[j++]=1;
    }
    else if(ch=='['){
        b[j++]=0;
        b[j++]=1;
        b[j++]=1;
        b[j++]=1;
    }
    else{
        b[j++]=1;
        b[j++]=1;
        b[j++]=1;
        b[j++]=1;
    }
}

int main(){
    bitset<X>b;
    string st;
    int j=0,curr=1;
    cin>>st;
    for(int i=st.size()-1;i>=0;i--){
        assign(b,st[i],j);
    }
    int sum=1*b[0];
    for(int i=1;i<j;i++){
        curr=(curr*2)%M;
        sum=(sum+curr*b[i])%M;
    }
    cout<<sum;

}