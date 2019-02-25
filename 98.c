#include <stdio.h>
void main() 
{	
   int n,a[10],i,flag=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
        if(a[i]<a[i+1])
        {
            flag=0;
        }
        else
        {
            printf("%d\n",i+1);
        }
   }
	getch();
}
