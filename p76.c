#include <stdio.h>
void main() 
{
    int n,a[10],i,j,count=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
   for(i=0;i<n;i++)
	{
	  if(a[i]%2==0)
	  {
	      count++;
	  }
	  else if(count>1)
	  {
	      if(a[i]%2!=0)
	      {
	          printf("%d\n",a[i]);
	          break;
	      }
	  }
	}  
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==1)
	    {
	        count++;
	    }
	    else if(count>1)
	    {
	        if(a[i]%2!=1)
	        {
	            printf("%d",a[i]);
	            break;
	        }
	    }
	}          
	getch();
}
