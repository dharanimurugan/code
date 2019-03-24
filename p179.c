#include <stdio.h>

void main() 
{
	int n1,n2,num,a[100],rem,count=0,count1=0,i;
	scanf("%d %d",&n1,&n2);
	num=n1^n2;
	while(num!=0)
	{
		rem=num%2;
		a[i]=rem;
		i++;
		count++;
		num=num/2;
	}
	for(i=0;i<count;i++)
	{
		if(a[i]==1)
		{
			count1++;
		}
	}
	printf("%d\n",count1++);
	getch();
}
