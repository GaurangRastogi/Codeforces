#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,mx=1;
    ll flag1=1,flag2=1,flag3=1,flag4=1;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(v[i],mx);
    }
    int l1=mx,l2=n-mx;
    //cout<<l1<<" "<<l2<<endl;
    vector<ll>p1(l1+1,0);
    vector<ll>p2(l2+1,0);
    for(int i=0;i<l1;i++){
        if(v[i]>l1||p1[v[i]]==1){
            flag1=0;
            break;
        }
        else    
            p1[v[i]]=1;
    }
    for(int i=l1;i<n;i++){
        if(v[i]>l2||p2[v[i]]==1){
            flag2=0;
            break;
        }
        else
            p2[v[i]]=1;
    }
    for(int i=1;i<=l1;i++){
        if(p1[i]!=1){
            flag1=0;
            break;
        }
    }
    
    for(int i=1;i<=l2;i++){
        if(p2[i]!=1){
            flag2=0;
            break;
        }
    }
    
    //swap(l1,l2);
    vector<ll>p3(l2+1,0),p4(l1+1,0);
    for(int i=0;i<l2;i++){
        if(v[i]>l2||p3[v[i]]==1){
            flag3=0;
            break;
        }
        else    
            p3[v[i]]=1;
    }
    for(int i=l2;i<n;i++){
        if(v[i]>l1||p4[v[i]]==1){
            flag4=0;
            break;
        }
        else
            p4[v[i]]=1;
    }

    for(int i=1;i<=l2;i++){
        if(p3[i]!=1){
            flag3=0;
            break;
        }
    }
    
    for(int i=1;i<=l1;i++){
        if(p4[i]!=1){
            flag4=0;
            break;
        }
    }
    //cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4;
    if(flag1==1&&flag2==1&&flag3==1&&flag4==1&&l1!=l2){
        cout<<2<<endl<<min(l1,l2)<<" "<<max(l1,l2)<<endl<<max(l1,l2)<<" "<<min(l1,l2)<<endl;
    }
    else if(flag1==1&&flag2==1){
        cout<<1<<endl<<l1<<" "<<l2<<endl;
    }
    else if(flag3==1&&flag4==1){
        cout<<1<<endl<<l2<<" "<<l1<<endl;
    }
    else cout<<0<<endl;
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