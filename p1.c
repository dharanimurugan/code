#include <stdio.h>
void main()
{
    int a,i,f=1;
    printf("enter the value a");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}

