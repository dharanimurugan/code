#include <stdio.h>
void main() 
{
	int n,m,j,a[10];
	scanf("%d %d",&n,&m);
	for(j=0;j<n;j++)
	{
	    scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
	    if(a[j]==m)
	    {
	        printf("yes");
	    }
	}
	getch();
}
