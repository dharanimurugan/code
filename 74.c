#include <stdio.h>
void main(void) 
{
	float n;
	int a;
	scanf("%f",&n);
	if(n<0)
	{
	    a=(int)(n-0.5);
	}
	else
	{
	    a=(int)(n+0.5);
	}
	printf("%d\n",a);
}
