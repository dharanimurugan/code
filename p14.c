#include <stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,m;
    scanf("%s",a);
    m=strlen(a);
    for(i=m-1;i>=0;i--)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            continue;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
	getch();
}
