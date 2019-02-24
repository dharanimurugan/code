#include <stdio.h>
void main()
{
	int l,r,i,m,count=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
	   m=i*i;
	   if(m<=r)
	   {
	       count++;
	   }
	}
	printf("%d",count);
	getch();
}
