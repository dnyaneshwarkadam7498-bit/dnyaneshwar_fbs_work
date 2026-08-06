#include<stdio.h>
void main(){
    int i,j,choice,n,status,rev,rem,temp,sum;
    printf("enter the number");
    scanf("%d",&n);
    printf("\nmenu");
     printf("\n1.check enven or odd");
      printf("\n2.check prime or not");
       printf("\n3.check palindrome or  not");
        printf("\ncheck positive negative or zero");
         printf("\nreverse");
          printf("\nsum of digits");
    printf("\nenter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                if(n%2==0){
                    printf("even");
                }else{
                    printf("odd");
                }
                break;
        case 2:
               if(n<=1){
                printf("not prime");
                break;
               }
               status=0;
               for(i=2;i<n;i++){
                if(n%i==0){
                    status=1;
                    break;
                }
            }
                if(status==0)
                    printf("prime");
                else
                printf("number not prime");
                break;
               
        case 3:
                temp=n;
                rev=0;
                while(temp>0){
                    rem=temp%10;//2
                    rev=rev*10+rem;//
                    temp=temp/10;//12
                }
                if(rev==n)
                {
                    printf("palindrome");
                }else{
                    printf("not palindrome");
                }
                break;
        case 4: if(n>0)
                printf("positive");
                   else if(n<0)
                     printf("negative");
                      else
                      printf("zero");
                      break;
        case 5:
                  temp=n;
                   rev=0;
                while(temp>0){
                   rem=temp%10;
                   rev=rev*10+rem;
                   temp=temp/10;
                  
           }
          printf("%d",rev);
        break;
        case 6: 
               temp=n;
               sum=0;       
                 while(temp>0){
                
                  rem=temp%10;
                  sum=sum+rem;
                  temp=temp/10;
                   }
                  printf("%d",sum);
                  break;

        default:
               printf("invalid choice");
        

               }
              }