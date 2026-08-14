#include<stdio.h>
void myconcat(char[],char[],int);
void main(){
    char arr[]="firstbit";
    char brr[]="solutions";

    myconcat(arr,brr,5);
}
void myconcat(char arr[],char brr[],int n){
    int i,j,k=0;
    char crr[30];
    for(i=0;arr[i]!='\0';i++){
        crr[i]=arr[i];
        k++;
    }
    for(j=0;j<5;j++){
       crr[k]=brr[j];
       k++;
    }
    crr[k]='\0';

    printf("%s",crr);


}