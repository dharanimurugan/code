#include <stdio.h>
#include<string.h>
void main()
{
	char a[10],c[10];
	int k,i,count1=0,count2=0;
	scanf("%s %s",a,c);
	scanf("%d",&k);
	int n1=strlen(a);
	int n2=strlen(c);
	if(n1==n2)
	{
	    for(i=0;i<n1;i++)
	    {
	        if(a[i]==c[i])
	        {
	            count1++;
	        }
	        else
	        {
	            count2++;
	        }
	    }
	    if(count2==k)
	    {
	        printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	}
	else
	{
	    printf("no");
	}
getch();
}
