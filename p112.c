#include <stdio.h>

void main() 
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0,res;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	res=sum;
	printf("%d\n",res);
	getch();
}
