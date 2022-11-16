#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,flag=0;
    char ch;
    cin>>n>>ch;
    string str;
    cin>>str;
    int ind=0;
    for(int i=0;i<n;i++){
        if(str[i]==ch)
            ind=i;
        if(str[i]!=ch)
            flag=1;
    }
    if(flag==0){
        cout<<0<<endl;
        return;
    }
    if(ind==-1)
        cout<<2<<endl<<n-1<<" "<<n-1<<endl;
    else if(ind==n-1){
        cout<<1<<endl<<n<<endl;
    }
    else if(ind>=n/2){
        cout<<1<<endl<<ind+1<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    return;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}