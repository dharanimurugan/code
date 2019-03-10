#include <stdio.h>
#include<string.h>
void main()
{
	int n,m,i,j;
	char a[10],temp;
	scanf("%s",a);
	n=strlen(a);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
	    temp=a[n-1];
        for(j=n-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=temp;
	   
	} printf("%s",a);
	getch();
}
