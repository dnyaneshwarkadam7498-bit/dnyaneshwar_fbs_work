#include<stdio.h>
void main(){
    char str[]="dnyaneshwar";
    int i,j,found=0,count=0;
    for(i=0;str[i]!='\0';i++){
        count=1;
        if(str[i]!=' ')
       
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                 count++;
                 
                
            }
        }
       printf("%c=%d\n",str[i],count);
           
        }
    }
