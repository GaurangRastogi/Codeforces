#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void OSI_sender(char s[]){
    printf("TRANSMITTER:\n");
    printf("APPLICATION LAYER: AH %s\n", s);
    printf("PRESENTATION LAYER: PHAH %s\n", s);
    printf("SESSION LAYER: SHPHAH %s\n", s);
    printf("TRANSPORT LAYER: THSHPHAH %s\n", s);
    printf("NETWORK LAYER: NHTHSHPHAH %s\n", s);
    printf("DATALINK LAYER: DHNHTHSHPHAH %s\n", s);
    printf("MESSAGE ENTERED INTO PHYSICAL LAYER AND TRANSMITTED\n");
}
void OSI_receiver(char s[]){
    printf("\n");
    printf("RECEIVER: \n");
    printf("MESSAGE ENTERED INTO PHYSICAL LAYER\n");
    printf("DATALINK LAYER: DHNHTHSHPHAH %s\n", s);
    printf("NETWORK LAYER: NHTHSHPHAH %s\n", s);
    printf("TRANSPORT LAYER: THSHPHAH %s\n", s);
    printf("SESSION LAYER: SHPHAH %s\n", s);
    printf("PRESENTATION LAYER: PHAH %s\n", s);
    printf("APPLICATION LAYER: AH %s\n", s);
}
int main(){
    char str[20];
    printf("Name: Gaurang Rastogi and Reg. No: 20BCE2954\n");
    printf("Enter String:");
    fgets(str, sizeof(str), stdin);
    OSI_sender(str);
    OSI_receiver(str);
    return 0;

}