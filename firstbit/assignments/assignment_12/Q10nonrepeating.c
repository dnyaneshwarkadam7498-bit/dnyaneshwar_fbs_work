#include<stdio.h>
void main(){
    char str[]="dnyaneshwar";
    int i,j,count;
    for(i=0;str[i]!='\0';i++){
        count=0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            printf("%c",str[i]);
           
        }
    }
}