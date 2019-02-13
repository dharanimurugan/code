#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int n,i,num;
	scanf("%s",a);
	scanf("%d",&num);
	n=strlen(a);
    for(i=0;i<num;i++)
    {
        printf("%c\n",a[i]);
  }
}
