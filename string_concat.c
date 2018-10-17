#include<stdio.h>
void main()
{
	char a[20], b[20];
	printf("Enter 2 strings to concat\n");
	scanf("\n%s\n%s",a,b);
	string_concat(a,b);
}
void string_concat(char a[20], char b[20])
{
	int i=0;
	char c[40];
	int l1=length(a); int l2=length(b);
	for(i=0;i<=l1-1;i++)
	{
		c[i]=a[i];
	}
	int j=0;
	for(i=l1;i<l1+l2;i++)
	{
		c[i]=b[j]; j++;
	}
	printf("%s",c);
}
int length(char a[20])
{
	int i=0;
	for (i=0; a[i]!='\0'; i++);
	return i;
}
