#include<bits/stdc++.h>
using namespace std;
long long solve(){
    long long a,b,n,m;
    cin>>a>>b>>n>>m;

    long long x=m*a,y=(m+1)*b;
    long long ans=0;
    if(x<y){

        ans+=x*(n/(m+1));
        
        int left=n%(m+1);

        if(a<b){
            ans+=a*left;
        }
        else{
            ans+=b*left;
        }

    }
    else{
        ans+=b*n;
    }
    return ans;
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