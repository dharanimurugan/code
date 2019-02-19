#include <stdio.h>
#include<math.h>
void main()
{
	float p,r,si;
	int n,result;
	scanf("%f %d %f",&p,&n,&r);
	si=((p*n*r)/100);
	result=floor(si);
	printf("%d\n",result);
}
