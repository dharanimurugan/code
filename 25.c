#include<stdio.h>
void main()
{
   int n,a[100],i,temp,j,m;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(m=j+1;m<=n;m++)
      {
        if(a[j]>=a[m])
        {
        temp=a[j];
        a[j]=a[m];
        a[m]=temp;
            
        }
      }
   
   }
     printf(" %d\t",a[j/2]);
}
