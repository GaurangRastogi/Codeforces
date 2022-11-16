#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int count=0,x=min(a.size(),b.size()),y=max(a.size(),b.size()),lx,ly,flag=0;
    if(a.size()==b.size()){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                cout<<0;
                return 0;
            }
        }
    }
    string temp,str;
    for(int i=0;i<x;i++){
        if(x%(i+1)!=0||y%(i+1)!=0)  continue;
        else{
            str="";
            flag=0;
            temp=a.substr(0,i+1);
            lx=x/(i+1);
            ly=y/(i+1);
            for(int i=1;i<=ly;i++){
                str+=temp;
                if(i==lx){
                    //cout<<str<<endl;
                    if(str==a||str==b)  continue;
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            //cout<<str<<endl<<endl;
            if((str==a||str==b)&&flag==0)   count++;
        }
    }
    cout<<count;
}