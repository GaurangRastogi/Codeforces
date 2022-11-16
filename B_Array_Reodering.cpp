#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int solve(){
    deque<int>dq{};
    int n,x,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0) dq.push_front(x);
        else dq.push_back(x);
    }
    for(int i=0;i<n;i++){
        //cout<<dq[i]<<" "<<count<<endl;
        if(dq[i]%2==0){
            count+=n-(i+1);
        }
        else{
            for(int j=i+1;j<n;j++){
                if(gcd(dq[i],2*dq[j])>1)   count++;
                //cout<<dq[i]<<" "<<count<<" "<<dq[j]<<endl;
            }
        } 
       // cout<<endl; 
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)  cout<<solve()<<endl;
}