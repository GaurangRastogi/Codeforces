#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,x;
    cin>>n>>k;
    set<int>st{};
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    if(st.size()==1){
        cout<<1<<endl;
        return;
    }
    else if(k==1&&st.size()>1){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<ceil((double)(st.size()-1)/(k-1))<<endl;
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