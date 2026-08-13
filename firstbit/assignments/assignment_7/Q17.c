#include<stdio.h>
void store(int arr[],int);
void display(int arr[],int);
void search(int arr[],int);
void delete(int arr[],int);
void update(int arr[],int);
void sort(int arr[],int);
void main(){
    int choice,i,arr[10];
    
printf("enter the number:");
    for(i=0;i<10;i++){
        
        scanf("%d",&arr[i]);
    }
   
while(choice !=7){
    printf("\n1.store");
    printf("\n2.display");
    printf("\n3.search");
    printf("\n4.delete");
    printf("\n5.update");
    printf("\n6.sort");
    printf("\n7.exit");

     printf("enter your choice:");
    scanf("%d",&choice);

    if(choice==1){
        store(arr,10);
    }
    else if(choice==2){
        display(arr,10);
    }
        else if(choice==3){
        search(arr,10);
        }
        else if(choice==4){
            delete(arr,10);
        }
        else if(choice==5){
            update(arr,10);
        }
        else if(choice==6){
            sort(arr,10);
        }
        else if(choice==7){
            printf("exit");
        }
    
        else{
        printf("invalid choice");
    }

}
}
void store(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("elements are:");
        scanf("%d",&arr[i]);

    }
}
void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void search(int arr[],int size){
    int i,num;
    printf("enter the number");
    scanf("%d",&num);

    for(i=0;i<size;i++){
          if(arr[i]==num){
            printf("\nelement found");
            return;
          }
    }
}
void delete(int arr[],int size){
int i,pos;
printf("\nenter the pos");
scanf("%d",&pos);
for(i=pos;i<size-1;i++){
    arr[i]=arr[i+1];
    
}
for(i=0;i<size-1;i++){
    printf("%d ",arr[i]);
}
}
void update(int arr[],int size){
    int i,pos,value;
    printf("enter the pos");
    scanf("%d",&pos);
 printf("enter the value");
 scanf("%d",&value);

 arr[pos]=value;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

void sort(int arr[],int size){
    int i,temp=0,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            printf("\nswap done: %d %d\n",arr[i],arr[j]);
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}