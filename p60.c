#include <stdio.h>
#include<string.h>
void main() 
{
	char a[10],b[10];
	int m,n1,i,j,count=0;
	scanf("%s %s",a,b);
	m=strlen(a);
	n1=strlen(b);
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n1;j++)
	    {
	    if(a[i]==b[j])
	    {
	        count=1;
	        break;
	    }
	    }
	}
	if(count==1)
	{
	     printf("yes..they have common characters");
	}
	
	else
	{
	    printf("no..don't have common characters");
	}
	getch();
}
