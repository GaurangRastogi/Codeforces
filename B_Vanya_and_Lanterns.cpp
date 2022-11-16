#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,l;
    cin>>n>>l;
    long long int arr[n+2];
    double ans[n+1];
    arr[0]=0;
    arr[n+1]=l;
    for(int i=1;i<=n;i++)    cin>>arr[i];
    sort(arr,arr+(n+2));
    //for(int i=0;i<=n+1;i++) cout<<arr[i]<<endl;
    cout<<endl;
    for(int i=0;i<=n;i++){
        ans[i]=arr[i+1]-arr[i];
        if(i!=0&&i!=n){
            ans[i]=double(ans[i])/double(2);
            //cout<<ans[i]<<endl;
        }
    }
    double mn=0;
    for(int i=0;i<=n;i++){
        if(mn<ans[i])   mn=ans[i];
    }
    printf("%.9lf",mn);
    
}