#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string str1,str2;
    cin>>str1>>str2;

    ll n=str1.size();


    ll t,q,value=0;
    cin>>t>>q;

    vector<ll>arr(q+t,-1);
    
    for(int i=0;i<n;i++){
        value+=(str1[i]==str2[i]);
    }

    ll type;
    for(int i=0;i<q;i++){
        cin>>type;
        if(arr[i]!=-1)
            value-=(str1[arr[i]]!=str2[arr[i]]);

        if(type==1){
            ll pos;
            cin>>pos;
            pos--;
            arr[i+t]=pos;
            value+=(str1[pos]!=str2[pos]);
        }

        else if(type==2){
            ll x,y,pos1,pos2;
            cin>>x>>pos1>>y>>pos2;

            pos1--;
            pos2--;

            value-=(str1[pos1]==str2[pos1]);
            value-=(str1[pos2]==str2[pos2]);
            if(x==1&&y==1){
                char temp=str1[pos1];
                str1[pos1]=str1[pos2];
                str1[pos2]=temp;
        
            }
            else if(x==1&&y==2){
                
                char temp=str1[pos1];
                str1[pos1]=str2[pos2];
                str2[pos2]=temp;
                

            }
            else if(x==2&&y==1){
                char temp=str2[pos1];
                str2[pos1]=str1[pos2];
                str1[pos2]=temp;
            }
            else{
                char temp=str2[pos1];
                str2[pos1]=str2[pos2];
                str2[pos2]=temp;
            }
            value+=(str1[pos1]==str2[pos1]);
            value+=(str1[pos2]==str2[pos2]);
        }   

        else{
            if(value==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
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