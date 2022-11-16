#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int>positions;
unordered_map<int,int>visited;
int solve(int start,int end,int step){
    if(visited[start]==1) return -1;
    else if(start==end)  return step;
    visited[start]=1;
    return solve(positions[start],end,step+1);
}
int main(){
    int n,st,end,x;
    cin>>n>>st>>end;
    for(int i=1;i<=n;i++){
        cin>>x;
        positions[i]=x;
    }
    cout<<solve(st,end,0);
}