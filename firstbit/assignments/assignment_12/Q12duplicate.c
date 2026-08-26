#include<stdio.h>
void main(){
    char str[]="dnyaneshwar";
    int i,j,found,index=0;
    char newstr[20];
    for(i=0;str[i]!='\0';i++){
        found=0;
        for(j=0;j<index;j++){
            if(str[i]==newstr[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            newstr[index]=str[i];
            index++;
        }
    }
    newstr[index]='\0';
    printf("%s",newstr);
}