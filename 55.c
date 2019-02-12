#include<stdio.h>
void main()
{
    int n,p,res;
    scanf("%d",&n);
    scanf("%d",&p);
    res=n*p;
    if(res%2==0)
    {
        printf("%d is even",res);
    }
    else
    {
        printf("%d is odd",res);
    }
}
