#include<stdio.h>
void main(){
    char str[]="dnyaneshwar";
    int i,j,count=0,found=0;
    for(i=0;str[i]!='\0';i++){
       
        for(j=i+1;str[j]!='\0';j++)//he loop apn ya mula use karto karn swathala ch count karu nahi manun
        {
            if(str[i]==str[j])
            {
                count++;
                if(count==2){
                    printf("%c",str[i]);
                    break;
                            }
        
            }
        }
       if(count== 2)
       {
        break;
       }
           
    }
}