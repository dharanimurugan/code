#include <stdio.h>
void main() 
{
	int n,m,j,res=1;
	scanf("%d %d",&n,&m);
	for(j=1;j<=n;j++)
	{
	    res=res*m;
	    if(res==n)
	    {
	        printf("yes..its the power of %d\n",m);
	        break;
	    }
	}
	if(res>n)
	{
	    printf("no");
	}
	getch();
}
