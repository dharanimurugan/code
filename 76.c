#include <stdio.h>
void main() 
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("no..it is not composite\n");
    }
    else
    {
        printf("yes..it is composite\n");
    }
}
