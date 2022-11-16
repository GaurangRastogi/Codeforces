#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// thanks youu____tuube
ll dp[101][101][2];
void solve(){
    int t,e,o,x,n;
    cin>>t;
    while(t--){
        cin>>n;
        e=0;
        o=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2)
                o++;
            else   
                e++;
        }
        if(dp[o][e][0]==1)
            cout<<"Alice"<<endl;
        else   
            cout<<"Bob"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    //Base Case
    for(int i=0;i<101;i++){
        dp[0][i][0]=1;
        dp[0][i][1]=0;
    }
    for(int i=0;i<101;i++){
        dp[1][i][1]=1;
        if(i&1)
            dp[1][i][0]=1;
        else
            dp[1][i][0]=0;
    }


    //Choice Diagram
    for(int i=2;i<101;i++){
        for(int j=0;j<101;j++){
            for(int k=0;k<2;k++){
                bool takenodd,takeneven;
                takeneven=0;
                takenodd=0;

                //Alice takes odd
                bool lose1=0;

                //bob takes odd
                if(i-2>-1){
                    lose1|=(dp[i-2][j][k^1]==0);
                    takenodd=1;
                }

                //bob takes even
                if(j-1>-1){
                    lose1|=(dp[i-1][j-1][k^1]==0);
                    takenodd=1;
                }

                //alice takes even
                bool lose2=0;
                
                if(j>0){

                    //bob takes even
                    if(j-2>-1){
                        lose2|=(dp[i][j-2][k]==0);
                        takenodd=1;
                    }

                    //bob takes odd
                    if(i-1>-1){
                        lose2|=(dp[i-1][j-1][k]==0);
                        takeneven=1;
                    }

                }

                bool res;
                //res store if alice wins?
                if(takeneven&&takenodd)
                    res=lose1&&lose2;
                else
                    res=lose1||lose2;

                dp[i][j][k]=res^1;
            }
        }
    }

    solve();

    return 0;
}