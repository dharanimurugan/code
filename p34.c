#include <stdio.h>
#include<string.h>
int main() 
{
	char a[20];
	int m,j;
	scanf("%s",a);
	m=strlen(a);
	printf("%c",a[0]);
	for(j=0;j<m;j+=3)
	{
	   printf("%c",a[j+3]);
	}
	getch();
}
