
#include <stdio.h>
void main() 
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<=m;i++)
	{
	    if( i%2==0 && m%i==0)
	    {
	        printf("%d ",i);
	    }
	}
	getch();
}
