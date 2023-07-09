#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
   
    ll n,m,countOne=0,count=0;
    cin>>n>>m;

    vector<vector<ll>>mat(n,vector<ll>(m));
    vector<ll>one(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            one[i]+=mat[i][j];
        }
        countOne+=one[i];
    }

    if(countOne%n!=0){
        cout<<-1<<endl;
        return;
    }

    count=countOne/n;

    priority_queue<pair<int,int>>plusPQ,minusPQ;

    for(int i=0;i<n;i++){
        if(one[i]>count){

            plusPQ.push({one[i]-count,i});
        }
        if(one[i]<count){
            minusPQ.push({count-one[i],i});
        }
    }
    vector<vector<ll>>ans;
    while(plusPQ.size()&&minusPQ.size()){
        ll val1=plusPQ.top().first;
        ll ind1=plusPQ.top().second;
        ll val2=minusPQ.top().first;
        ll ind2=minusPQ.top().second;
        plusPQ.pop();
        minusPQ.pop();
        for(int i=0;i<m;i++){
            if(mat[ind1][i]!=0&&mat[ind2][i]==0){
                mat[ind1][i]=0;
                mat[ind2][i]=1;
                ans.push_back({ind1,ind2,i});
                val1--;
                val2--;
            }
            if(val1==0){
                minusPQ.push({val2,ind2});
                break;
            }
            if(val2==0){
                plusPQ.push({val1,ind1});
                break;
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto arr:ans){
        cout<<arr[0]+1<<" "<<arr[1]+1<<" "<<arr[2]+1<<endl;
    }

    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}