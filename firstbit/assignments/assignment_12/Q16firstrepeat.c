#include<stdio.h>
void main(){
    char str[]="dnyaneshwar";
    int i,j,found=0;
    for(i=0;str[i]!='\0';i++){
       
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                 printf("%c",str[i]);
                 found=1;
                 break;
                
            }
        }
       if(found==1){
        break;
       }
           
        }
    }
