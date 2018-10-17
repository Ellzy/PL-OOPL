#include<stdio.h>
int length(char[20]);
int string_compare(char x[20],char y[20]);
void reverse(char x[20],char y[20]);
void palindrone(char[20]);
void concat(char x[20],char y[20]);
void main()
{
char a[20],b[20],c[20],d[20];
int ch,l,result,flag1;
do
{
printf("1.accept and display string a,\n 2.to accept and display string b,\n3. to find length,\n4.to reverse string,\n5. to string_compare string,\n6. to find  a palindrone of a string,\n7. to concat a string,\n8. to exit,\nenter you choice-");
scanf("%d",&ch);

switch(ch)
{
        case 1:
                printf("\n enter your 1st string-");
                scanf("%s",a);
                printf("string=%s",a);
                break;
        case 2:
                printf("\n enter your 2nd string-");
                scanf("%s",b);
                printf("string=%s",b);
                break;
        case 3:
		l=length(a);
		printf("length=%d",l);
		l=length(b);
		printf("length=%d",l);
		break;
	case 4:
	        reverse(a,c);
	        printf("the reverse is %s",c);
	        reverse(b,d);
	        printf("the reverse is %s",d);
		break;
	case 5:
		flag1=string_compare(a,b);
		if(flag1==1)
		printf("strings are not equal");
		else
		printf("strings are equal");
		break;
	case 6:
		palindrone(a);
		palindrone(b);
		break;

	case 7:
		concat(a,b);
	    break;
	case 8:
		break;
default:printf("enter a valid point");}
}while(ch!=0);
}
int length(char x[20])
{
int len=0,i;
for(i=0;x[i]!='\0';i++)
{
len++;
}
return len;
}
void reverse(char x[20],char y[20])
{int i,j;
for(i=0;x[i]!='\0';i++){
}
i--;
for(j=0;i>=0;j++){
x[i]=y[j];
i--;
}
y[j]='\0';
}
int string_compare(char x[20],char y[20])
{int i,flag=0;
for(i=0;x[i]!='\0';i++)
{
if (x[i]!=y[i])
{
flag=1;
break;
}
}
return flag;
}
void palindrone(char a[20])
{int flag2;
char b[20];
reverse(a,b);
flag2=string_compare(a,b);
if (flag2==1)
printf("%s is palindrone",a);
else
printf("%s is not a palindrone",a);
}
void concat(char a[20],char b[20])
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
	printf("The concat of the string is %s",c);
}
