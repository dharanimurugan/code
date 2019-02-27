void main() 
{
	char str[20];
	int j,count1=0,count2=0;
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]=='(')
		{
			count1=count1+1;
		}
		else if(str[j]==')')
		{
			count2=count2+1;
		}
	}
	if(count1==count2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
}
