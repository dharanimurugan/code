#include <stdio.h>
void main()
{
    int m,i,count=0;
	scanf("%d",&m);
    for(i=m;i>=2;i--)
    {
        if(m%i==0)
        {
            count++;
        }
    }
    if(count>=2)
    {
        printf("yes..%d is further divisible",m);
    }
    else
    {
        printf("no");
    }
	getch();
}
