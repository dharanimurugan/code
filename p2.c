#include <stdio.h>
void main()
{
    int a,t=0,r;
    printf("enter the value a");
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        t=t*10+r;
        a=a/10;
    }
    printf("%d",t);
    }
