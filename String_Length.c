#include<stdio.h>
int main ()
{
	char a[20];
	printf("Enter a string to find length\n");
	scanf("%s",a);
	length(a);
}
void length(char a[20])
{
	int i=0;
	for (i=0; a[i]!='\0'; i++);
	printf("%d", i);
}
