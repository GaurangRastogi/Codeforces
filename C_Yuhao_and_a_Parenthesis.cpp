#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int utility(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(st.size()==0)
            st.push(str[i]);
        else{
            char ch=st.top();
            if(str[i]==')'&&ch=='(')
                st.pop();
            else    
                st.push(str[i]);
        }
    }
    int countopen=0,countclose=0;
    while ((st.size()>0))
    {
        char ch=st.top();
        if(ch=='(')
            countopen++;
        else
            countclose++;
        st.pop();
    }
    if(countclose==0)
        return countopen;
    else if(countopen==0)
        return -1*countclose;
    else    
        return INT_MIN;
    
}
void solve(){
   ll n;
   cin>>n;
   vector<int>v{};
   string str;
   ll count,flag;
   for(int i=0;i<n;i++){
        cin>>str;
        int xyz=utility(str);
        if(xyz!=INT_MIN)
            v.push_back(xyz);
   }
    count=0;
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    // cout<<endl;
    int m=v.size();
    ll l=0,h=m-1,temp;
    while(l<h){
        temp=v[l]+v[h];
        if(temp==0){
            count++;
            l++;
            h--;
        }
        else{
            if(temp>0)
                h--;
            else
                l++;
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}


/*
 count=0;
        flag=1;
        for(int j=0;j<str.size();j++){
            if(count<0)
                flag=0;
            if(str[j]=='('){
                count++;    
            }
            else    
                count--;
        }
        cout<<str<<" "<<count<<endl;
        if(flag==0&&count>0) 
            continue;
        else   
            v.push_back(count);
        // v[i]=count;
    */