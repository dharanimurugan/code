#include <stdio.h>
void main() 
{
    int n,a[10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]>a[i+1])
	   {
	       printf("%d\n",a[i]);
	       break;
	   }
	}
	getch();
}
