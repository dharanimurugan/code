#include <stdio.h>
void main() 
{
	int m,a[10],i,count=0,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<m,j<m;i++,j++)
    {
        if(a[i]>a[j])
        {
            count=0;
            break;
        }
        else
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("yes...sorted order");
    }
    else
    {
        printf("no");
    }
	getch();
}
