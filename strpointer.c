#include<stdio.h>
int len(char*);
int com(char*,char*);
void rev(char*,char*);
void pal(char*);
void concat(char*,char*,char*);
void copy(char*,char*);
int i,j;
void main()
{char a[20],b[20],c[20],d[20];
int n,flag1,l1,l2,count1;
do{
	printf("\nenter 1 to calculate length\nenter 2 to compare two strings\nenter 3 to reverse a string\nenter 4 to find a palindrome of a string\nenter 5 to concat\nenter 6 to copy a string\nenter 7 to exit \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("\nenter 1st string\t");
		       scanf("%s",a);
		       l1=len(a);
		       printf("%d is the size of string",l1);
		       break;
		case 2:flag1=com(a,b);
		       if (flag1==1)
		       printf("\nstrings are not equal\n");
		       else
		       printf("\nstrings are equal\n");
		       break;
		case 3:rev(a,c);
		       printf("%s is the reverse of string:\t\n",c);
		       rev(b,d);
		       printf("%s is the reverse of string:\t\n",d);
		       break;
		case 4:pal(a);
		       pal(b);
		       break;
		case 5:concat(a,b,c);
		       printf("the concat of two strings is %s\t\n");
		       break;
		case 6:copy(a,c);
		       printf("copied string is %s\n");
		       copy(b,d);
		       printf("copied string is %s\n");
			   break;
	    case 7:
		break;		
	}
}  while(n!=8);
}
int len(char*a1){
int l=0;
while(*a1!='\0')
{
	a1++;
	l++;
}
return l;
}
int com(char*a1,char*b1){
	int flag=0;
	while(*a1!='\0')
	{
    if(*a1!=*b1)
    {
    flag=1;
    break;	
	}
	a1++;
	b1++;
}
return flag;
}
void rev(char*a2,char*b2)
{   int l;
    l=len(a2);
    while(*a2!='\0')
    {
    a2++;
	}
	a2--;
	while(l>0){
		*b2=*a2;
		b2++;
		a2--;
		l--;
	}
	*b2='\0';
}
void pal(char*a3)
{int flag2;
char b3[20];
if (flag2==1)
printf("\n %s is a palindrone\n",b3);
else
printf("\n %s is not a palindrone\n",b3);
}
void concat(char*a4,char*b4,char*c4)
{
while(*a4!='\0')
{*c4=*a4;
a4++;
c4++;
}
while(*b4!='\0')
{*c4=*b4;
b4++;
c4++;
}
*c4='\0';
}
void copy(char*a5,char*b5)
{
while(*a5!='\0')
{*b5=*a5;
b5++;
a5++;
}
*b5='\0';
}

