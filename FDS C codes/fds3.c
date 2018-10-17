#include<stdio.h>
int len(char[20]);
int com(char[20],char[20]);
void rev(char[20],char[20]);
void pal(char[20]);
void concat(char[20],char[20]);
void copy(char[20],char[20]);
void substr(char[20],char[20]);
 int i,j;

 void main() 
 {char a[20],b[20],c[20],d[20];
   int n,flag1,l1,l2;
   do{
                  
              
    printf("\n\nenter 1 for calculate length\nenter 2 for comparing strings\nenter 3 for reversing a string\nenter 4 for checking for pallendrone\nenter 5 for concatinate two strings\nenter 6 for copy a string\nenter 7 for count substring\n");
    scanf("%d",&n);
    
 switch(n)
 {    case 1:     printf("\nenter a string\t");
                     scanf("%s",&a);
                  printf("\nenter a 2nd string\t");
                     scanf("%s",&b);             
                l1=len(a);
                     printf("\n%d is size of string\n\n",l1);
                l2=len(b);
                     printf("%d is size of 2nd string\n\n",l2);
                  break;
      case 2: flag1= com(a,b);
               if(flag1==1)
                 printf("\nstrings are not equal\n");
               else
                 printf("\nstrings are equal\n");
      
	              break;
	  case 3: rev(a,c);
	          printf("\nreverse of 1st string:\t%s",c);
			  rev(b,d);
			  printf("\nreverse of 2nd string:\t%s",d);
			  break;
	  case 4: pal(a);
	  		  pal(b);	           
	  		  break;
	  case 5: concat(a,b);         
	            break;
	  case 6:     printf("enter a string:\t");
	               scanf("%s",&a);
				   copy(a,c);
                  break;
      case 7:     printf("enter 1st string:\t");
	               scanf("%s",&a);
	              printf("enter 2nd string:\t");
	               scanf("%s",&b);
	               substr(a,b);
                     break;	  
	  default: printf("enter a valid option");            
 }
 }while(n!=0);
}

int len(char a1[20])
  {int l=0;
     for(i=0;a1[i]!='\0';i++)
       {a1[i];
          ++l;
        }
       return l;
  } 

int com(char a1[20],char b1[20])
     {int flag=0;
        for(i=0;a1[i]!='\0';i++)
        {
        if(a1[i]!=b1[i])
       {flag=1;
         break;}
       }
              
return (flag);     }

void rev(char a2[20],char b2[20])
      {int l;
        l= len(a2);
        int i=l-1;
        int a=0;
       for(i;i>=0;i--)
        {b2[a]=a2[i];
            a++;
         }
        b2[a]='\0';
      }

void pal(char a3[20])
     { int flag2;
	   char b3[20];
       rev(a3,b3);
      flag2= com(a3,b3);
    if(flag2!=1)
         printf("\n%s is pallendrone\n",a3);
    else
         printf("\n%s is not pallendrone\n",a3);
    
	   }

void concat(char a4[20],char b4[20])
   {  
      i=len(a4);
      j=0;
    for(i;b4[j]!='\0';j++)
      {
        a4[i]=b4[j];
              i++;
      }
        a4[i]='\0';
     printf("both strings are added:\t%s",a4); 
  }	   
  
  void copy(char a5[20],char b5[20])
  {
        for(i=0;a5[i]!='\0';i++)
      {
         b5[i]=a5[i];
        }
       b5[i]='\0';
         printf("\n1st string:\t%s\ncopied string:\t%s",a5,b5);
  }
  
  void substr(char a6[20],char b6[20])
  {
  int count=0;
  i=0;
  j=0;
  while(a6[i]!='\0')
  {
  if(a6[i]==b6[j])
  {
  i++;
  j++;
  if(b6[j]=='\0')
  {
  count++;
  j=0;
  }
  }
  else
  {i++;
  j=0;
  }
  }
 if(count>0)
     {printf("%s is a sub string of %s\n and it comes %d times in %s ",b6,a6,count,b6);
       }
 else 
    printf("\n%s not a substring of %s\n",b6,a6);
                   
  }
  
  /* OUTPUT
  


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
1

enter a string  sac

enter a 2nd string      hin

3 is size of string

3 is size of 2nd string



enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
2

strings are not equal


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
3

reverse of 1st string:  cas
reverse of 2nd string:  nih

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
4

sac is not pallendrone

hin is not pallendrone


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
5
both strings are added: sachin

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
6
enter a string: sachinn

1st string:     sachinn
copied string:  sachinn

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
7
enter 1st string:       banana
enter 2nd string:       a

a is a sub string of banana
 and it comes 3 times in a

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
 */ 
