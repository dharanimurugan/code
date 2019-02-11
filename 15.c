#include<stdio.h>
void main()
{
int c,d,i;
printf("enter the two limits");
scanf("%d%d",&c,&d);
for(i=c;i<d;i++)
{
if((i)%2==0)
printf("%d\n",i);
}
}
