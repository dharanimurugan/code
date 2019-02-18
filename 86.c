#include <stdio.h>
#include<string.h>
 void main()
{
    char s[100];
    int l,i,k,count=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(k=i+1;k<l;k++)
        {
            if(s[i]==s[k])
            {
            count=1;
            break;
            }
        
            else
            continue;
        }
