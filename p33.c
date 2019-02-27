#include<stdio.h>
void main()
{
   int m,a[30][30],i,j,c=0;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       for(j=1;j<=m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<=m+1;i++)
   {
       for(j=0;j<=m+1;j++)
       {
           if(a[i][j]==1){
           if((a[i][j-1]==0 && a[i][j+1]==0 && a[i-1][j]==0 && a[i+1][j]==0))
           {
               c+=1;
        }
           }
       }
       
   }
   printf("%d",c);
   getch();
    
}
