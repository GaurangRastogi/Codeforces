#include <bits/stdc++.h>
using namespace std;

string solve()
{
    long long int n,k,b,t;
    cin>>n>>k>>b>>t;

    vector<long long int>x(n),v(n);

    for(int i=0;i<n;i++)
        cin>>x[i];

    for(int i=0;i<n;i++)
        cin>>v[i];
    

    long long int count=0,cantReach=0,swap=0;
    for(int i=n-1;i>=0;i--){

        long long int distance=b-x[i];

        long long int canCover=t*v[i];

        if(distance<=canCover){
            count++;
            if(cantReach>0){
                swap=swap+cantReach;
            }
        }
        else{
            cantReach++;
        }

        if(count==k)
            break;
    }

    if(count<k){
        return "IMPOSSIBLE";
    }
    else{
        return to_string(swap);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,ch;
    cin >> t;
    ch=t;
    while (t--)
        cout<<"Case #"<<ch-t<<": "<<solve()<<endl;

    return 0;
}