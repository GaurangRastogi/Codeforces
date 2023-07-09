#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;
typedef long long int ll;
const ll len = 3e5+1;
//watched solution obviously

vector<ll>spf(len,0);

void createsieve(){

    spf[1]=1;
    for(ll i=2;i*i<len;i++){

        if(spf[i]==0){

            spf[i]=i;

            for(ll j=i*i;j<len;j+=i){
                if(!spf[j])
                
                    spf[j]=i;
            }
        }
    }
}



void solve(){

    ll n;
    cin>>n;

    vector<ll>arr(n);
    vector<ll>parent(2*len,-1),distance(2*len,-1);
    vector<vector<ll>>graph(2*len);

    for(ll i=0;i<n;i++){
        cin>>arr[i];    
    }

    ll src,tgt;
    cin>>src>>tgt;

    src--;
    tgt--;

    for(ll i=0;i<n;i++){
        
        while(spf[arr[i]]>1){
            // to distinguish b/n i=2 and prime =2
            //adding offset len   
            graph[i].push_back(len+spf[arr[i]]);
            graph[len+spf[arr[i]]].push_back(i);

            arr[i]/=spf[arr[i]];

        }

    }
    

    //Do bfs in it and find the shortest path

    queue<ll>q;
   

    q.push(src);
    distance[src]=1;
    parent[src]=-1; // already -1

    while(!q.empty()){

        ll curr= q.front();

        q.pop();

        for(ll child:graph[curr]){

            if(distance[child]==-1){
                parent[child]=curr;
                distance[child]=distance[curr]+1;
                q.push(child);
            }
        }
    }


    //if no answer
    if(distance[tgt]==-1){
        cout<<-1;
        return;
    }

    //printing path
    ll node=tgt;
    vector<ll>path;

    while(node!=-1){
        if(node<n){
            //node>n then it's prime factors
            path.push_back(node);
        }
        node=parent[node];
    }
   
    
    reverse(path.begin(),path.end());

    cout<<(distance[tgt]+1)/2<<endl;
    for(ll node:path){
        cout<<node+1<<" ";
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    createsieve();
    solve();
    return 0;
}