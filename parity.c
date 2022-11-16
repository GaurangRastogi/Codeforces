#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int even_odd_ONES(char s[],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        flag^=(s[i]-'0');
    }
    return flag;//flag=1(odd ones) flag=0(even ones)
}
void parity(char bit_data[],char received_data[],int n,char ch){
    for(int i=0;i<=n;i++){
        if(bit_data[i]!=received_data[i]){
            printf("Error occured during transmission\n");
            return;
        }
    }
    printf("No error occured during transmission\n");
    
}
int main(){
    char ch,bit_data[10],received_data[10];
    printf("\tParity Error Detection\t\n");
    printf("Enter 'e' for even parity and 'o' for odd parity:-");
    scanf("%c",&ch);
    printf("Enter the bit_value of data: ");
    scanf("%s",bit_data);
    int n=strlen(bit_data);
    switch (ch)
    {
    case 'e':
        if(even_odd_ONES(bit_data,n)==1)    bit_data[n]='1';
        else bit_data[n]='0';
        break;
    case 'o':
        if(even_odd_ONES(bit_data,n)==0)    bit_data[n]='1';
        else bit_data[n]='0';
    default:
        printf("Def");
        break;
    }
    bit_data[n+1]='\0';
    printf("\nEnter the receiver bit data: ");
    scanf("%s",received_data);
    parity(bit_data,received_data,n,ch);
}

