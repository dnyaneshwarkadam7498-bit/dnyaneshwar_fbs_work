#include<stdio.h>
struct time{
    int hr,min,sec;
};
struct time formattime(struct time t);
void displaytime(struct time t);
void main(){
  struct time t;
    printf("enter the hr min and sec");
    scanf("%d%d%d",&t.hr,&t.min,&t.sec);

    printf("%d: %d: %d:",t.hr,t.min,t.sec);
  
    t=formattime(t);
     displaytime(t);
}
struct time formattime(struct time t){
int tsec=t.hr*60*60+t.min*60+t.sec;
    t.hr=tsec/3600;
    t.min=tsec%3600;
    t.sec=t.min%60;
    t.min=t.min/60;
return t;
}
void displaytime(struct time t){
     printf("\nhr=%d: min=%d: sec=%d:",t.hr,t.min,t.sec);
}
