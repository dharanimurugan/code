#include <stdio.h>
#include<string.h>
void main() 
{
	char a[10];
	int count=0,i,m;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	    if(a[i]>='0'&&a[i]<='9')
	    {
	        count=0;
	    }
	    else
	    {
	        count++;
	    }
	}
	if(count==0)
	{
	    printf("yes..numeric");
	}
	else
	{
	    printf("no..not a numeric");
	}
	getch();
}
