#include <stdio.h>
void main() 
{
int n,p,i;
int count=0;
scanf("%d,%d",&p,&n);
for(i=p;i<=n;i++)
{
 if(i%2!=0)
 {
  printf("%d",i);    
}
}
}
