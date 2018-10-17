#include<stdio.h>
int len(char*);
int com(char*,char*);
void rev(char*,char*);
void pal(char*);
void concat(char*,char*,char*);
void copy(char*,char*);
int substr(char*,char*);
 int i,j;

 void main() 
 {char a[20],b[20],c[20],d[20];
   int n,flag1,l1,l2,count1;
   do{
                  
              
    printf("\n\nenter 1 for calculate length\nenter 2 for comparing strings\nenter 3 for reversing a string\nenter 4 for checking for pallendrone\nenter 5 for concatinate two strings\nenter 6 for copy a string\nenter 7 for count substring\nenter 8 to exit\n");
    scanf("%d",&n);
    
 switch(n)
 {  
       case 1: printf("\nenter a string\t");
                     scanf("%s",a);
                   printf("\nenter a 2nd string\t");
                     scanf("%s",b);             
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
	  case 5: concat(a,b,c);     
	              printf("both strings are added:\t%s",c);     
	            break;
	  case 6: copy(a,c);
	              printf("\nstring:\t%s\ncopied string:\t%s",a,c);
	              copy(b,d);
	              printf("\nstring:\t%s\ncopied string:\t%s",b,d);
                  break;
      case 7: count1=substr(a,b);
                    if(count1>0)
                    {printf("%s is a sub string of %s\n and it comes %d times in %s ",b,a,count1,a);
                    }
                    else
                      {printf("%s is not a sub string of %s\n",b,a);}
                     break;
       case 8: break;     	  
	  default: printf("enter a valid option\n");            
 }
 }while(n!=8);
}

int len(char *a1)
  {int l=0;
     while(*a1!='\0')
       { a1++;
          l++;
        }
       return l;
  } 

int com(char *a1,char *b1)
     {int flag=0;
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
	   
void rev(char *a2,char *b2)
      {int l;
        l= len(a2);
        while(*a2!='\0')
        { 
        a2++;
        }
        a2--;
    while(l>0)
        {*b2=*a2;
            a2--;
            b2++;
            l--;
         }
        *b2='\0';
      }

void pal(char *a3)
     { int flag2;
	   char b3[20];
       rev(a3,b3);
      flag2= com(a3,b3);
    if(flag2!=1)
         printf("\n%s is pallendrone\n",a3);
    else
         printf("\n%s is not pallendrone\n",a3);
    
	   }

void concat(char *a4,char *b4,char *c4)
   { 
      
      while(*a4!='\0')
      {*c4=*a4;
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
  
  void copy(char *a5,char *b5)
  {
        while(*a5!='\0')
      {
         *b5=*a5;
         a5++;
         b5++;
        }
       *b5='\0';
         
  }
  
  int substr(char *a6,char *b6)
  {char *temp=b6;
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
  {a6++;
  b6=temp;
  }
  }
  return count; 
  }
  
  
  /* OUTPUT
  

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
1

enter a string  sachin

enter a 2nd string      rim

6 is size of string

3 is size of 2nd string



enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
2

strings are not equal


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
3

reverse of 1st string:  nihcas
reverse of 2nd string:  mir

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
4

sachin is not pallendrone

rim is not pallendrone


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
5
both strings are added: sachinrim

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
6

string: sachin
copied string:  sachin
string: rim
copied string:  rim

enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
7
rim is not a sub string of sachin


enter 1 for calculate length
enter 2 for comparing strings
enter 3 for reversing a string
enter 4 for checking for pallendrone
enter 5 for concatinate two strings
enter 6 for copy a string
enter 7 for count substring
enter 8 to exit
/*
