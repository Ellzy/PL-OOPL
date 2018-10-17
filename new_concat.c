#include<stdio.h>
int main()
{
	char a[20], b[20], d[40];
	printf("Enter 2 strings to concat");
	scanf("%s\n%s",a,b);
	string_concat(a,b);
	return 0;
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
	for(i=l1;i<l1+l2;i++)
	{
		c[i]=b[i];
	}
	printf("%s",c);
}
