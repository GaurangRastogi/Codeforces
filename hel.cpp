#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,x,count;
    cin>>n;
    vector<int>v1{},v2{};
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        v2.push_back(x);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());
    long long int sum_v1=0,sum_v2=0;
    for(int i=0;i<(n-n/4);i++){
        sum_v1+=v1[i];
        sum_v2+=v2[i];
    }
    int ind_v1=n-n/4-1,ind_v2=n-n/4;
    count=n;
    while(sum_v1<sum_v2){
        count++;
        if(count%4!=0){
            sum_v1+=100;
            if(ind_v2<n)    sum_v2+=v2[ind_v2++];
        }
        else{
            if(ind_v1>=0)
                sum_v1+=100-v1[ind_v1--];
        }
    }
    return count-n;
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