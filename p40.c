
#include<stdio.h>
void main()
{
int m,i,c=0,j;
printf("\nEnter the number : ");
scanf("%d",&m);
for(i=0;i<=m;i++)
{
for(j=m;j>=0;j--)
{
if((i*1)+(j*2)==m)
{
c=c+1;
}
}
}
printf("\nBy using 1's and 2's we make %d in %d ways.",m,c);
getch();
}
