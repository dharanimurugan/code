#include<stdio.h>
#include<string.h>
void main() {
	char b[100],c[100];
	int i,n,n1;
	scanf("%s",b);
	scanf("%s",c);
	n=strlen(b);
	n1=strlen(c);
    if(n==n1)
    {
        printf("%s",c);
    }
    else if(n>n1)
    {
        printf("%s",b);
    }
    else
    {
        printf("%s",c);
    }
}
