#include <stdio.h>
void main()
{
    int a,d,c,sum=0;
	  scanf("%d %d %d",&a,&d,&c);
    sum=a+d+c;
    if(sum==180)
    {
        printf("yes..it forms traingle");
    }
    else
    {
        printf("they cant be the interior angles of the triangle");
    }
	getch();
}
