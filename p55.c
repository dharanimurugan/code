#include<stdio.h>
void main()
{
    char b[10],c[10];
    int i,j,count=0;
    scanf("%s %s",b,c);
    for(i=0,j=0;b[i]!='\0',c[i]!='\0';i++,j++)
    {
        if(b[i]=c[i])
        {
            count=1;
        }
        else
        {
            printf("no");
            count=0;
            break;
        }
    }
    if(count==1)
    {
    printf("yes...both strings are the same");
    }
   getch();
}
