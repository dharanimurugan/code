#include <stdio.h>
void main() 
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    sum=n+m;
    if(sum%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
