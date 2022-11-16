#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=n-1;i>=0;i--){
        if(str[i]=='1'){
            if(k>=n-i-1){
                k-=n-i-1;
                swap(str[n-1],str[i]);
            }
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(str[i]=='1'){
            if(i<=k){
                swap(str[0],str[i]);
            }
            break;
        }
    }
    string temp="";
    int sum=0;
    for(int i=0;i<n-1;i++){
        temp="";
        temp+=str[i];
        temp+=str[i+1];
        if(temp=="01")  sum+=1;
        else if(temp=="10") sum+=10;
        else if(temp=="11") sum+=11;
    }
    return sum;
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