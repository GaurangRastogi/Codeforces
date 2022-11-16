#include<iostream>
#include<ctime>
using namespace std;
class StopnWait{
public:
int n,i,temp;
int array[100],recieved[100];
StopnWait(int x){
n=x;
i=0;
}
void getArray(){
cout<<"Enter the data bits separated by a space: ";
for(int i=0;i<n;i++)
cin>>array[i];
}
void StopandWait(){
srand(time(0));
while(i!=n){
temp=(rand()%3);
if(temp==1){
cout<<i+1<<" Bit Recieved: Acknowledgment Sent ("<<array[i]<<")"<<endl;
recieved[i]=array[i];
i++;
}
if(temp==2){
cout<<i<<" Bit Lost: Acknowlegment not sent"<<endl;
cout<<"Resent bit"<<endl;
cout<<i+1<<" Bit Recieved: Acknowledgment Sent ("<<array[i]<<")"<<endl;
recieved[i]=array[i];
i++;
}
if(temp==0){
cout<<i<<" Bit Recieved: Acknowlegment Not Sent"<<endl;
recieved[i]=array[i];
cout<<"Resent Bit";
cout<<i+1<<" Duplicate bit Recieved Discarded: Acknowledgment Sent ("<<array[i]<<")"<<endl;
}
}
cout<<"The received bits are:"<<endl;
for(i=0;i<n;i++){
cout<<recieved[i]<<" ";
}
cout<<endl;
return;
}
};
int main(){
cout<<"Enter the number of data bits: ";
int n;
cin>>n;
StopnWait obj(n);
obj.getArray();
obj.StopandWait();
return 0;
}