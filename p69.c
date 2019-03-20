#include <stdio.h>
void main()
{
    int n,a[10],i,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n-k;i++)
    {
        printf("%d\n ",a[i]);
    }
    getch();
}
