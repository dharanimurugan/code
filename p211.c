#include <stdio.h>
void main()
{
	int m,k,n1,i;
	scanf("%d %d",&m,&k);
	if(m>k)
	{
	    n1=m;
	}
	else
	{
	    n1=k;
	}
    for(i=n1;i>=2;i--)
    {
        if(m%i==0 && k%i==0)
        {
            printf("%d",i);
            break;
        }
    }
getch();
}
