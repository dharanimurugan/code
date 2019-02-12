#include<stdio.h>           //bitwise operators
void main()
{
    int n2,n3;
    scanf("%d %d",&n2,&n3);
    n2=n2^n3;                                  // n1=n1+n2;
    n3=n2^n3;                                   // n2=n1-n2;
    n2=n2^n3;                                    // n1=n1-n2;
    printf("%d %d",n2,n3);
}
