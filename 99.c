#include <stdio.h>
void main()
{
	int a,b,c,res=0;
	scanf("%d %d %d",&a,&b,&c);
	res=(a*b)%c;
	printf("%d\n",res);
	getch();
}
