#include <stdio.h>

void main()
{
    int num,rem,sum=0,sq;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sq=rem*rem;
        sum=sum+sq;
        num=num/10;
    }
    printf("\n%d",sum);
    getch();
}
