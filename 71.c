#include <stdio.h>
#include<string.h>
void main()
{
    char b[100];
    int n,i,count=0;
    scanf("%s",b);
    n=strlen(b);
    for(i=0;i<n;i++)
    {
        if(b[i]==b[n-i-1])
        {
            count++;
        }
    }
    if(n==count)
    {
        printf("yes..it is palindrome");
    }
    else
    {
        printf("not");
    }
}
