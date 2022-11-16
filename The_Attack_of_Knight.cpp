#include<bits/stdc++.h>
using namespace std;
int func(int a,int b,int x1,int x2,int y1,int y2){
    vector<pair<int,int>>vp;
    vp.push_back({a-1,b+2});
    vp.push_back({a-1,b-2});
    vp.push_back({a+1,b+2});
    vp.push_back({a+1,b-2});
    vp.push_back({a+2,b-1});
    vp.push_back({a+2,b+1});
    vp.push_back({a-2,b+1});
    vp.push_back({a-2,b-1});
    pair<int,int>p={x1,y1};
    pair<int,int>p2={x2,y2};
    if(find(vp.begin(),vp.end(),p)!=vp.end()&&find(vp.begin(),vp.end(),p2)!=vp.end()){
        cout<<"YES"<<endl;
        return 1;
    }
    return  0;
}
void solve(){
    int x1,y1,y2,x2;
    cin>>x1>>y1>>x2>>y2;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(func(i,j,x1,x2,y1,y2)==1)
                return;
        }
    }
    cout<<"NO"<<endl;
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