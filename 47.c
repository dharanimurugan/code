#include <stdio.h>
void main() 
{
	int n,i,b[10],min=99,max=0;
	scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
       if(b[i]>max)
       {
           max=b[i];
       }
   }
   for(i=0;i<n;i++)
   {
       if(b[i]<min)
       {
           min=b[i];
       }
   }
   printf("min:%d\nmax:%d",min,max);
}
