#include <stdio.h>
#include<string.h>
void main() 
{
	int n,m,sum;
	scanf("%d %d",&n,&m);
	sum=n-m;
	if(sum%2==0)
	printf("even\n");
	else
	printf("odd\n");
}
