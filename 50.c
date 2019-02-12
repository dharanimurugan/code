#include <stdio.h>
void main()
{
	int n,i,x=1,pow=2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    x=x*pow;
	    if(x==n)
	    {
	        printf("%d\n is a power of 2",n);
	        break;
	    }
	}
        if(x!=n)
	    {
	        printf("%d\n is not a power of 2",n);
	    }
}
