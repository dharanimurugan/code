#include <stdio.h>
void main()
{
	int a[10],ch,m,i,j,max=0,count=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        
        for(j=i+1;j<m;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]='+';
            }
        }
        if(count<=max)
        {
            max=count;
            ch=a[i];
        }
    }
    printf("%d",ch);
	getch();
}
