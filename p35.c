#include <stdio.h>
void main()
{
    char b[50];
    int c,i,j;
    scanf("%[^\n]",&b);
    for(i=0;b[i]!='\0';i++)
    {
        c=0;
        for(j=0;b[j]!='\0';j++)
        {
            if(b[i]==b[j])
            {
                c++;        
            }
        }
      
      if(c==1)
        printf("%c",b[i]); 
       }
    
    getch();
}
