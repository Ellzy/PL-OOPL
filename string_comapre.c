#include<stdio.h>
int main ()
{
	char a[20]; char b[20];
	printf("Enter 2 Strings \n");
	scanf("%s \n %s", a, b);
	string_compare(a,b);
	return 0;
}

void string_compare(char a[20], char b[20])
{
	int i=0;
	int flag=0;
	for(i=0; a[i]!='\0'; i++)
	{
		if( (int)a[i] == (int)b[i])
		{
			flag=0;
		}
		else
		{
			flag=1;
		}

	}
	if(flag==0)
	{
		printf("Both the strings are Equal !!!");
	}
	else
	{
		printf("Both the strings are not Equal !!!");
	}
}
