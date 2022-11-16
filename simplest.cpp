#include<iostream>
using namespace std;
class Simplest{
    int n,arr[100];
    public:
    Simplest(int num){
        n=num;
    }
    void receiver(){
        cout<<"The recieved frames are: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    void sender(){
        cout<<"Enter the data bits ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"\t\tSending frames:\n";
        receiver();
    }
};
int main(){
    int num;
    cout<<"Enter the number of data bits ";
    cin>>num;
    Simplest obj(num);
    obj.sender();
    return 0;
}