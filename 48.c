#include <stdio.h>
void main()
{
	int a[10],i,n,sum=0;
    int avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum+=a[i];
	}
    avg=sum/n;
	printf("%d\n",avg);
}
