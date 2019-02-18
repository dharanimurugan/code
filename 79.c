#include <stdio.h>
void main() 
{
    int n,m,a,i;
    scanf("%d %d",&n,&m);
    a=n*m;
    for(i=0;i<=a;i++)
    {
        if(a==(i*i))
        {
            printf("yes..perfect square\n");
        }
    }
}
