void main() 
{
    char a[10];
    int i,m;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	    if(a[i]=='X')
	    {
	        a[i]='A';
	    }
	    else if(a[i]=='Y')
	    {
	        a[i]='B';
	    }
	    else if(a[i]=='Z')
	    {
	        a[i]='C';
	    }
	    else
	    {
	         a[i]=a[i]+3;  
	    }
	}
	printf("%s",a);  
	getch();
}
