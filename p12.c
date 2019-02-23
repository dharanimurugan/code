#include <stdio.h>
void main()
{
    int n,i,a[10],t,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
getch();
}
