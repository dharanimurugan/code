#include <stdio.h>
#include<string.h>
void main() 
{	
   char a[10],b[10];
   int i,n;
   scanf("%s",a);
   n=strlen(a);
   for(i=0;i<n;i=i+2)
   {
       b[i]=a[i];
       printf("%c\n",b[i]);
   }
   printf(" ");
   for(i=1;i<n;i=i+2)
   {
       b[i]=a[i];
       printf("%c\n",b[i]);
   }
}
