#include<stdio.h>
#include<stdlib.h>
void main(){
/*int *p;
p=calloc(sizeof(int),3);
printf("%d%d%d",p[1],p[2],p[3]);*/
int *p;
p=calloc(2,sizeof(int));
p[0]=10;
p[1]=20;
//p=realloc(p,4*sizeof(int));
p[2]=30;
p[3]=40;
printf("%d %d %d %d",p[0],p[1],p[2],p[3]);


}