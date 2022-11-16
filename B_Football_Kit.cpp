#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ain,bin[n],ao[n],bo[n];
    unordered_map<int,int>um;
    for(int i=0;i<n;i++)  {
        cin>>ain>>bin[i];
        um[ain]++;
        ao[i]=n-1;
        bo[i]=n-1;
    }
    for(int i=0;i<n;i++)    cout<<ao[i]+um[bin[i]]<<" "<<bo[i]-um[bin[i]]<<endl;
}