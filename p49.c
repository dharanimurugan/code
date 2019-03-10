#include <stdio.h>
void main()
{
	signed int m;
	scanf("%d",&m);
	if(m>=-32768 && m<=32767)
	{
	    printf("INT");
	}
	else
	{
	    printf("LONG LONG");
	}
	getch();
}
