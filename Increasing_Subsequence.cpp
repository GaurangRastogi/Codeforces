#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;

    vector<ll>arr(n);

    for(auto &it:arr)
        cin>>it;


    vector<ll>temp;
    temp.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
        }
        else{
            int ind=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            temp[ind]=arr[i];
        }
    }
    
    cout<<temp.size();
    return 0;
}