#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    int n,val,ind;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    stack<pair<int,int>>st{};
    vector<int>ans(n,0);
    for(int i=n-1;i>=0;i--){
        cout<<endl<<arr[i]<<endl;
        if(st.size()==0){
            st.push({i,arr[i]});
        }
        else{
            val=st.top().second;
            while(st.size()>0&&val<arr[i]){
                ind=st.top().first;
                cout<<val<<" "<<ind<<" "<<i<<endl;
                ans[i]=ind-i;
                st.pop();
            }
            st.push({i,arr[i]});
        }
    }
    
    while(st.size()>0){
        int ind=st.top().first;
        ans[ind]=ind;
        st.pop();
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>val;
        cout<<ans[val-1]<<endl;
    }
    return 0;
}
