#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    // watched solution :(
    vector<int>arr(n),p(n+1,-1),q(n+1,-1);
    
    set<int>a,b;
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        a.insert(i+1);
        b.insert(i+1);
    }

   
    vector<int>ansa(n,0),ansb(n,0);

    for(int i=0;i<n;i++){
        if(p[arr[i]]==-1){
            p[arr[i]]=i;
            ansa[i]=arr[i];
            a.erase(arr[i]);
        }
        else if(q[arr[i]]==-1){
            q[arr[i]]=i;
            ansb[i]=arr[i];
            b.erase(arr[i]);
        }
        else{
            // cout<<arr[i]<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(p[arr[i]]==i){
            auto itr=b.upper_bound(arr[i]);

            if(itr==b.begin()){
                cout<<"NO"<<endl;
                return;
            }

            itr=prev(itr);
            ansb[i]=*itr;
            b.erase(ansb[i]);
        }
        else{

            auto itr=a.upper_bound(arr[i]);

            if(itr==a.begin()){
                cout<<"NO"<<endl;
                return;
            }

            itr=prev(itr);
            ansa[i]=*itr;
            a.erase(ansa[i]);
        
        }
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<ansa[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ansb[i]<<" ";
    }
    cout<<endl;

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