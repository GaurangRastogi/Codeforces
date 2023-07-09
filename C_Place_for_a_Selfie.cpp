#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// codeWithSingh

void solve()
{
    ll n,m,a,b,c;
    cin>>m>>n;

    //given y=ax^2+bx+c, such that a>0
    // and y=mx

    // let's say for some (x,y) they intersect

    //hence ax^2+bx+c=mx

    // ax^2 + (b-m)x+c=0;

    // but we dont' want them to intersect, hence there D<0
    //where D is given by b^2-4ac
    

    // therefore, (b-m)^2 - 4ac<0
    // 4ac>0 and we want (b-m)^2 as less as possible to make it <0

    //applying the binary search on given list of m, to find such m, such that (b-m)^2-4ac<0


    vector<ll>arr(m,0);
    for(auto &it:arr)
        cin>>it;

    sort(arr.begin(),arr.end());


    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(c<0){
            cout<<"NO"<<endl;
            continue;
        }
        ll flag=0,l=0,h=m-1;
        while(l<=h){
            ll mid=(l+h)/2;

            if((b-arr[mid])*(b-arr[mid])-4*a*c<0){
                cout<<"YES"<<endl<<arr[mid]<<endl;
                flag=1;
                break;
            }
            else{

                if(arr[mid]>b){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }

            }

        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    cout<<endl;
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