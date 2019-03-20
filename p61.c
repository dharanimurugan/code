#include <stdio.h>
void main()
{
    int n,a[10],k,i,sum=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+a[i];
	}
	if(sum==k)
	{
	    printf("yes\n");
	}
	else
	{
	    printf("no\n");
	}
	getch();
}
