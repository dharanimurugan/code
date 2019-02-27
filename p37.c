#include<stdio.h>
void main()
{
    int a[30][2],i,m,j,c=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        if(a[i][0]<a[i][1])
        {
            c=c+1;
        }
    }
    printf("%d",c);
    getch();
}
