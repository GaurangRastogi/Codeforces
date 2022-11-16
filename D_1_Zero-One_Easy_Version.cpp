#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(){
    ll n,x,y;
    cin>>n>>x>>y;

    string str1,str2;
    cin>>str1>>str2;

    vector<string>v{};
    string str="";
    int ans=0;
    for(int i=0;i<n;i++){
        char ch=(str1[i]-'0')^(str2[i]-'0')+'0';
        if(ch=='1'){
            str+=ch;
            ans+=ch-'0';
        }
        else{
            if(str.size()>0)
            v.push_back(str);
            str="";
        }
    }
    if(str.size())
        v.push_back(str);
    if(ans%2){
        return -1;
    }
    ll ansx=0,ansy=0;
    int count=0;
    for(auto i:v){
        ansx+=x*(i.size()/2);
        count+=i.size()%2;
    }
    ansx+=y*(count/2)+y*(count%2);
    ansx+=y*count;

    count=0;
    // cout<<v.size()<<" ";
    if(v.size()==1&&v[0].size()==2&&str1.size()==2){
        ansy=x;
    }
    else if(v.size()==1&&v[0].size()==2){
        ansy=2*y;
    }
    else{
        for(auto i:v){
            // cout<<i<<" "<<i.size()<<endl;
            ansy+=y*(i.size()/2);
            count+=i.size()%2;
        }
        ansy+=y*(count/2)+y*(count%2);
    }
    return min(ansx,ansy);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
    return 0;
}