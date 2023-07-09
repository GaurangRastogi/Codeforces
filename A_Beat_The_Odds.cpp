#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin>>n;
    int no_of_subsets=(1<<n); //2^n


    vector<int>arr(n);

    for(auto &it:arr)
        cin>>it;

    for(int num=0;num<no_of_subsets;num++){

        int sum=0;
        for(int bit=0;bit<n;bit++){

            if(num&(1<<bit)){
                sum+=arr[bit];
            }
            else{
                sum-=arr[bit];
            }
        }

        if(sum%360==0){
            return "YES";
        }
    }

    return "NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<solve();
    return 0;
}