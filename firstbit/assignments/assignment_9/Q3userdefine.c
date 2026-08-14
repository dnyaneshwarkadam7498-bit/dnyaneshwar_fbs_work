#include<stdio.h>
void myconcat(char[],char[]);
void main(){
    char arr[]="firstbit";
    char brr[]="solutions";

    myconcat(arr,brr);
}
void myconcat(char arr[],char brr[]){
    int i,j,k=0;
    char crr[30];
    for(i=0;arr[i]!='\0';i++){
        crr[i]=arr[i];
        k++;
    }
    for(j=0;brr[j]!='\0';j++){
       crr[k]=brr[j];
       k++;
    }
    crr[k]='\0';

    printf("%s",crr);


}