#include <stdio.h>
void main() 
{  
int n,i,a[n],max;  
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++)
	{ 
	if(a[i]>max)
	{
		max=a[i];
	}
	}
	printf("%d\n",max);
}
