#include<stdio.h>
int main()
{
	char a[20]; char b[20];
	printf("Enter the two strings to find substring of\n");
	scanf("%s\n%s",a,b );
	substring_check(a,b);
	return 0;
}
void substring_check(char a[20], char b[20])
{
	int i=0; int j=0; int k=0;
	while( a[i] != '\0' && b[j] != '\0' )
	{
		i=k;
		j=0;
		while( a[i] != '\0' && b[j] != '\0' )
		{
			if( a[i] != b[j] )
			{
				break;
			}
			else
			{
				i++; j++;
			}
		}k++;
	}
	if( b[j] == '\0' )
	{
		puts("2nd string found in 1st string");
	}
	else
	{
		puts("2nd string not found in 1st string");
	}
}
