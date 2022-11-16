#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q,a,b;
    cin>>n>>q;
    deque<int>dq(n,0);
    unordered_map<int,int>um{};
    for(int i=0;i<n;i++){
        cin>>dq[i];
        um[i+1]=dq[i];
    }
    vector<int>winner{};
    for(int i=0;i<n;i++){
        int a=dq.front();
        dq.pop_front();
        int b=dq.front();
        dq.pop_front();
        dq.push_front(max(a,b));
        dq.push_back(min(a,b));
        winner.push_back(max(a,b));
        //cout<<a<<" "<<b<<endl;
    }
    // cout<<endl;
    // for(auto i:winner)
    //     cout<<i<<" ";
    // cout<<endl;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        int find=um[a],val=0;
        if(b>n&&um[a]==n){
            val=b-n;
            b=n;
        }
        if(b>n)
            b=n;
        //cout<<find<<"  ";
        val+=upper_bound(winner.begin(),winner.begin()+b,find)-lower_bound(winner.begin(),winner.begin()+b,find);
        cout<<val<<endl;
    }
    //cout<<endl;

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