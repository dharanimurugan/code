#include <stdio.h>
void main()
{
	int m,rem=0,k,count=0;
	scanf("%d %d",&m,&k);
	while(m!=0)
	{
	    rem=m%10;
	    if(rem==k)
	    {
	        count++;
	    }
	    m=m/10;
	}
	printf("%d",count);
	getch();
}
