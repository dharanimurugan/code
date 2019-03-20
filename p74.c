#include<stdio.h>
#include<string.h>
void main() 
{
    char a[10];
    int i,j,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    if(a[i]==a[j])
	    {
	        printf("yes..has repeating characters\n");
	        break;	   
	    }
	    }
	    break;
	}
	getch();
}
