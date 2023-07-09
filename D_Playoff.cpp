#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
string str;
set<ll>ans;

void check(vector<ll>&arr,ll ind){

   
    
    if(ind==n+1){
        ans.insert(arr[0]);
        return;
    }

// cout<<str[ind]<<" ";
    vector<ll>newArr;
    if(str[ind-1]=='0'){
        for(int i=0;i<arr.size();i+=2){
            newArr.push_back(min(arr[i],arr[i+1]));
        }   
    }
    else{
        for(int i=0;i<arr.size();i+=2){
            newArr.push_back(max(arr[i],arr[i+1]));
        }
    }

    // for(auto i:newArr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    check(newArr,ind+1);
}
void backtrack(ll ind,unordered_map<ll,ll>&visited,vector<ll>&arr){
    if(ind==(1<<n)+1){
        check(arr,1);
        return;
    }
    else{

        for(int i=1;i<=(1<<n);i++){
            if(visited.find(i)==visited.end()){
                //visit it
                visited[i]=1;
                arr.push_back(i);
                backtrack(ind+1,visited,arr);
                
                //backtrack
                arr.pop_back();
                visited.erase(i);
            }
        }
    }

}
void solve()
{
    cin>>n;
    cin>>str;

    unordered_map<ll,ll>visited;
    vector<ll>arr;
    backtrack(1,visited,arr);

    for(auto i:ans)
        cout<<i<<" ";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}