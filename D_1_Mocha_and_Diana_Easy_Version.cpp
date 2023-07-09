#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class DSU{
    vector<int>parent;
    vector<int>rank;
    int n;
    public:
    DSU(int len){
        n=len;
        parent.resize(n+2);
        rank.resize(n+2,0);
    }

    void makeset(){
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
    }

    int find(int node){
        if(node!=parent[node])
            parent[node]=find(parent[node]);
        return parent[node];
    }


    void unionSet(int x,int y){
        int rootX=find(x);
        int rootY=find(y);

        if(rootX==rootY)
            return;
        
        if(rank[rootX]>rank[rootY])
            parent[rootY]=rootX;
        
        else{
            parent[rootX]=rootY;
            if(rank[rootX]==rank[rootY])
                rank[rootY]++;
        }
    }
};


void solve()
{
    ll n,m1,m2,x,y;
    cin>>n>>m1>>m2;

    DSU dsu1(n),dsu2(n);
    dsu1.makeset();
    dsu2.makeset();

    for(int i=0;i<m1;i++){
        cin>>x>>y;
        dsu1.unionSet(x,y);
    }

    for(int i=0;i<m2;i++){
        cin>>x>>y;
        dsu2.unionSet(x,y);
    }

    vector<pair<int,int>>ans;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int rootX1=dsu1.find(i);
            int rootY1=dsu1.find(j);
            int rootX2=dsu2.find(i);
            int rootY2=dsu2.find(j);

            if((rootX1!=rootY1)&&(rootX2!=rootY2)){
                ans.push_back({i,j});
                dsu1.unionSet(i,j);
                dsu2.unionSet(i,j);
            }

        }
    }

    cout<<ans.size()<<endl;
    for(auto pr:ans){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}