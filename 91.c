#include <stdio.h>
void main()
{
	int l,b,h,tsa,volume;
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("volume=%d",volume);
	printf("TSA=%d",tsa);
}
