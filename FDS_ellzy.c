#include<stdio.h>
#include<string.h>
int length_pointer(char *a1)
{
    int l=0;
    while(*a1!='\0')
       { a1++;
          l++;
        }
    return l;
}

int compare_pointer(char *a1,char *b1)
    {
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

void reverse_pointer(char *a2,char *b2)
{
        int l;
        l=length_pointer(a2);
        while(*a2!='\0')
        {
          a2++;
        }
        a2--;
        while(l>0)
        {
            *b2=*a2;
            a2--;
            b2++;
            l--;
         }
        *b2='\0';
}

void palindrome_pointer(char *a3)
{
    int flag2;
	  char b3[20];
    reverse_pointer(a3,b3);
    flag2=compare_pointer(a3,b3);
    if(flag2!=1)
         printf("\n%s is palindrone\n",a3);
    else
         printf("\n%s is not palindrone\n",a3);

}

void concat_pointer(char *a4,char *b4,char *c4)
{
    while(*a4!='\0')
    {
      *c4=*a4;
      a4++;
      c4++;
    }
    while(*b4!='\0')
    {
      *c4=*b4;
      c4++;
      b4++;
    }
    *c4='\0';

}

void copy_pointer(char *a5,char *b5)
{
        while(*a5!='\0')
      {
         *b5=*a5;
         a5++;
         b5++;
        }
       *b5='\0';

}

int substring_pointer(char *a6,char *b6)
{
    char *temp=b6;
    int count=0;
    while(*a6!='\0')
    {
      if(*a6==*b6)
      {
        a6++;
        b6++;
        if(*b6=='\0')
        {
          count++;
          b6=temp;
        }
      }
      else
      {
        a6++;
        b6=temp;
      }
    }
  return count;
}
int length(char a[20])
{
	int i=0;
	for (i=0; a[i]!='\0'; i++);
	return i;
}
int string_compare(char a1[20],char b1[20])
{
  int flag=0,i=0;
  for(i=0;a1[i]!='\0';i++)
  {
    if(a1[i]!=b1[i])
  {
    flag=1;
    break;
  }
}
return (flag);
}
void string_reverse(char a2[20],char b2[20])
{
        int l;
        l= length(a2);
        int i=l-1;
        int a=0;
        for(i;i>=0;i--)
        {
          b2[a]=a2[i];
          a++;
        }
        b2[a]='\0';
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
void string_copy(char a[20], char c[20])
{
  int i;
  for(i=0;a[i]!='\0';i++)
  {
    c[i]=a[i];
  }
  c[i]='\0';
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
void palindrome(char a3[20])
{
  int flag2;
	char b3[20];
  string_reverse(a3,b3);
  flag2=string_compare(a3,b3);
  if(flag2!=1)
    printf("\n%s is palindrone\n",a3);
  else
    printf("\n%s is not palindrone\n",a3);
}
int menu_return()
{
  int flag=0, a=0;
  puts("\n \n \n \n \n");
  puts("================================");
  puts("  Want to return to main menu?  ");
  puts("================================");
  puts("                                ");
  puts("Press 1 to return to main menu  ");
  puts("Press 2 exit                    ");
  puts("                                ");
  puts("================================");
  scanf("%d",&a);
  return a;
}
int main()
{
  char a[20]; char b[20]; char c[40];
  int choice=0;
  int menu=0, l1=0, flag1=0;
  int flag=1; int l=0;
  while(flag!=0)
  {
  puts("\n \n \n \n \n");
  puts("================================");
  puts("        String Functions        ");
  puts("================================");
  puts("|                              |  ");
  puts("|Press 1 for length            |  ");
  puts("|Press 8 for length pointer    |  ");
  puts("|Press 2 for compare           |  ");
  puts("|Press 9 for compare pointer   |  ");
  puts("|Press 3 for reverse           |  ");
  puts("|Press 10 for reverse pointer  |  ");
  puts("|Press 4 for concat            |  ");
  puts("|Press 11 for concat pointer   |  ");
  puts("|Press 5 for copy              |  ");
  puts("|Press 12 for copy pointer     | ");
  puts("|Press 6 for substring check   | ");
  puts("|Press 13 for palindrome check | ");
  puts("|Press 7 for palindrome pointer|");
  puts("|                              |");
  puts("================================");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1:
            puts("\n \n \n \n \n");
  	        printf("Enter a string to find length\n");
  	        scanf("%s",a);
  	        l=length(a);
            printf("%d",l);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 2:
            puts("\n \n \n \n \n");
  	        printf("Enter 2 Strings \n");
  	        scanf("%s \n %s", a, b);
  	        string_compare(a,b);
            if(flag1==0)
              printf("\nStrings are not equal\n");
            else
              printf("\nStrings are equal\n");
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 3:
            puts("\n \n \n \n \n");
  	        printf("Enter a string to reverse\n");
  	        scanf("%s",a);
  	        string_reverse(a,b);
            printf("%s",b);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 4:
            puts("\n \n \n \n \n");
  	        printf("Enter 2 strings to concat\n");
  	        scanf("\n%s\n%s",a,b);
  	        string_concat(a,b);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 5:
            puts("\n \n \n \n \n");
            printf("Enter the string to copy\n");
            scanf("\n%s",a);
            string_copy(a,b);
            printf("%s",b);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 6:
            puts("\n \n \n \n \n");
  	        printf("Enter the two strings to find substring of\n");
  	        scanf("%s\n%s",a,b );
  	        substring_check(a,b);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 7:
            puts("\n \n \n \n \n");
            printf("Enter the string to check palindrome\n");
            scanf("\n%s",a);
            palindrome_pointer(a);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 8:
            printf("\nEnter a string\t");
            scanf("%s",a);
            l1=length_pointer(a);
            printf("Length is %d",l1);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 9:

            puts("\n \n \n \n \n");
            printf("Enter 2 Strings \n");
            scanf("%s \n %s", a, b);
            flag1=compare_pointer(a,b);
            if(flag1==1)
            printf("\nStrings are not equal\n");
            else
            printf("\nStrings are equal\n");
            menu=menu_return();
            if(menu==2)
            {
                flag=0;
              }
              else
              {
                flag=1;
              }
              break;

    case 10:

            puts("\n \n \n \n \n");
            printf("Enter a string to reverse\n");
            scanf("%s",a);
            reverse_pointer(a,c);
            printf("\nreverse of 1st string:\t%s",c);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 11:
            puts("\n \n \n \n \n");
            printf("Enter 2 strings to concat\n");
            scanf("\n%s\n%s",a,b);
            concat_pointer(a,b,c);
            printf("both strings are added:\t%s",c);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 12:
            puts("\n \n \n \n \n");
            printf("Enter the string to copy\n");
            scanf("\n%s",a);
            copy_pointer(a,c);
            printf("\nstring:\t%s\ncopied string:\t%s",a,c);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    case 13:

            puts("\n \n \n \n \n");
            printf("Enter the string to palindrome\n");
            scanf("\n%s",a);
            palindrome(a);
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
            break;

    default:
            puts("\n \n \n \n \n");
            puts("Invalid Input");
            menu=menu_return();
            if(menu==2)
            {
              flag=0;
            }
            else
            {
              flag=1;
            }
  }
  }
  return 0;
}
