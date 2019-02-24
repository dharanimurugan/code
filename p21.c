#include <stdio.h>
void main()
{
	int b[2],c[2],d[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&c[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&d[i]);
	}
	for(i=0;i<2;i++)
	{
	    if(b[i]==c[i] && c[i]==d[i])
	    {
	        flag=1;
	    }
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	getch();
}
