#include <stdio.h>
void main()
{
    int l,i;
    char a[50];
    gets(a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    getch();
}
