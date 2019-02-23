#include<stdio.h>
#include<string.h>
void main() 
{
    char a[10];
    char str[]="kabali";
    int i,j,temp=0,m,m1,k=0,l,count=0;
    m=strlen(str);
    scanf("%d",&n1);
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
   while(k<m1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(m==l)
       {
           for(i=0;i<m;i++)
           {
               for(j=i+1;j<m;j++)
               {
                   if(a[i]>a[j])
                   {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
           if(strcmp(str,a)==0)
           {
               count++;
           }
       }k++;
   }
   printf("%d\n",count);
	getch()
}
