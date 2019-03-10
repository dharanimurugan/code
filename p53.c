#include<stdio.h>
void main()
{
    char b[10];
    int i,count=0;
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
   getch();
}
