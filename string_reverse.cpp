#include<stdio.h>
int main()
{
	char a[20];
	printf("Enter a string to find length");
	scanf("%s",a);
	string_reverse(a);
}
void string_reverse(char a[20])
{
	char b[20]; int i=0, j=0;
	int l=length(a);
	for( i=l-1; l>=0; l-- )
	{
		b[j]=a[i];j++;
	}
}
int length(char a[20])
{	
	int i=0;
	for (i=0; a[i]!='\0'; i++);
	return i;
}
