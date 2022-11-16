#include<bits/stdc++.h>
using namespace std;
int searchdecimal(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]=='.') return i;
    }
    return -1;
}
int main(){
    string str,ans,temp;
    cin>>str;
    int flag=0,i;
    if(str[0]=='-') flag=1;
    if(flag==1){
        ans="($";
        str=str.substr(1,str.size()-1);
    }
    else ans="$";
    int point=searchdecimal(str);
    if(point!=-1){
        str+="00";
        temp=str.substr(point,3);
    }
    else temp=".00";
    
    if(point==-1)   point=str.size();
    for(i=0;i<(point)%3;i++){
        ans+=str[i];
    }
    for(i;i<point;i++){
        if((point-i)%3==0&&ans.back()!='$'){
            ans+=',';
        }
        ans+=str[i];
    }
    ans+=temp;
    if(flag==1) ans.push_back(')');
    cout<<ans;
    return 0;

}