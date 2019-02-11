#include<stdio.h>
void main()
{
int i,n,a,d,sum=0;
printf(" Enter the number of arithmetic progression");
scanf("%d",&n);
printf("Enter a and d values");
scanf("%d%d",&a,&d);
for(i=1;i<=n;i++)
{
sum=sum+(a+(i*d));
}
  printf("Result is %d",sum);
}
