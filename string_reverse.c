#include<stdio.h>
int main()
{
	char a[20];
	printf("Enter a string to reverse\n");
	scanf("%s",a);
	string_reverse(a);
}
void string_reverse(char a[20])
{
	char b[20]; int i=0, j=0;
	int l=length(a);
	for( i=l-1; a[i]>=0; i-- )
	{
		b[j]=a[i];j++;
	}
	printf("%s",b);
}
int length(char a[20])
{
	int i=0;
	for (i=0; a[i]!='\0'; i++);
	return i;
}
