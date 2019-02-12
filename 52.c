#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    if(n>9)
    {
        while(n!='\0')
        {
           rem=n%10;
           rev=(rev*10)+rem;
           n=n/10;
        }
        n=rev;
        rem=0;
        while(n!='\0')
        {
            rem=n%10;
           switch(rem)
           {
             case 0:printf("zero\n ");
               break;
             case 1:printf("one\n ");
                   break;
            case 2:printf("two\n ");
                   break;
             case 3:printf("three\n ");
                   break;
             case 4:printf("four\n ");
                   break;
             case 5:printf("five\n");
                   break;
             case 6:printf("six\n ");
                   break;
             case 7:printf("seven\n ");
                   break;
             case 8:printf("eight\n ");
                   break;
             case 9:printf("nine\n ");
                   break;  
           }
          
           n=n/10;
        }
        
    }
    else
    {
    switch(n)
    {
        case 0:printf("zero\n");
               break;
         case 1:printf("one\n");
               break;
        case 2:printf("two\n");
               break;
         case 3:printf("three\n");
               break;
         case 4:printf("four\n");
               break;
         case 5:printf("five\n");
               break;
         case 6:printf("six\n");
               break;
         case 7:printf("seven\n");
               break;
         case 8:printf("eight\n");
               break;
         case 9:printf("nine\n");
               break;
    }
    }
}
