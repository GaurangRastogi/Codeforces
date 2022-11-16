#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y,temp,count=1;
    cin>>n;
    cin>>x;
    queue<int>q1{},q2{};
    for(int i=0;i<x;i++){
        cin>>temp;
        q1.push(temp);
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>temp;
        q2.push(temp);
    }

    if(q1.front()<q2.front()){
        //cout<<q1.front()<<" "<<q2.front()<<endl;
        temp=q1.front();
        q2.push(temp);
        q2.push(q2.front());
        q2.pop();
        q1.pop();
    }
    else{
        temp=q2.front();
        q1.push(temp);
        q1.push(q1.front());
        q2.pop();
        q1.pop();
    }
    

    //cout<<q1.front()<<" "<<q2.front()<<endl;
    while(q1.size()&&q2.size()&&count<1000){
        
        if(q1.front()<q2.front()){
            temp=q1.front();
            q2.push(temp);
            q2.push(q2.front());
            q2.pop();
            q1.pop();
        }
        else{
            temp=q2.front();
            q1.push(temp);
            q1.push(q1.front());
            q2.pop();
            q1.pop();
        }
        count++; 
    }
    if(count==1000)
        cout<<-1<<endl;
    else if(q1.size()==0)
        cout<<count<<" "<<2<<endl;
    else cout<<count<<" "<<1<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}