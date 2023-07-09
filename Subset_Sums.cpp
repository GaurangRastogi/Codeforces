#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n,a,b;
    cin>>n>>a>>b;
    int n1=n/2,n2=n-n1;
    vector<int>arr1(n1),arr2(n2);
    
    for(auto &it:arr1){
        cin>>it;
    }
    for(auto &it:arr2)
        cin>>it;

 
    int nos1=(1<<n1),nos2=(1<<n2);
    long long count=0;
    
    vector<int>sum1(nos1),sum2(nos2);

    for(int num=0;num<nos1;num++){
        int sum=0;
        for(int bit=0;bit<n1;bit++){
            if(num&(1<<bit)){
                sum+=arr1[bit];
            }
        }
        sum1[num]=sum;
    }

    for(int num=0;num<nos2;num++){
        int sum=0;
        for(int bit=0;bit<n2;bit++){
            if(num&(1<<bit)){
                sum+=arr2[bit];
            }
        }
        sum2[num]=sum;
    }

    // for(int i=0;i<nos1;i++){
    //     cout<<sum1[i]<<" ";
    // }

    // cout<<endl;
 

    sort(sum2.begin(),sum2.end());
//    for(int i=0;i<nos2;i++){
//         cout<<sum2[i]<<" ";
//     }
//     cout<<endl;
    for(int i=0;i<nos1;i++){

        count+=upper_bound(sum2.begin(),sum2.end(),b-sum1[i])-lower_bound(sum2.begin(),sum2.end(),a-sum1[i]);
        // cout<<sum1[i]<<" "<<count<<endl;
        // count+=lower_bound(sum2.begin(),sum2.end(),sum1[i])-sum2.begin();
    }

    cout<<count<<endl;
    return 0;
}



/*
        b<= x+y <=a
        b-y<=x<=a-y
*/