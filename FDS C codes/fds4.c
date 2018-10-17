#include<stdio.h>
#include<string.h>
typedef struct employee
{
int e_id,sal;
char f_name[20],l_name[20],des[20];
}emp;

void create(emp e[25],int n);
void display(emp e[25],int n);
int search(emp e[25],int n);
void update(emp e[25],int n);
void del(emp e[25],int n);
void add(emp e[25],int n);
void sort(emp e[25],int n);

void main()
{
int ch,n1,l;
emp e[25];
do
{
printf("===============================\n1.create database\n2.search details\n3.update record at database\n4.delete record at database\n5.add data to database\n6.sort database\n===============================\nEnter your choice\n===============================\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nenter the no of records you want to enter:\t");
        scanf("%d",&n1);
        create(e,n1);
             break;
case 2: l=search(e,n1);
       if(l==-1)
             printf("enter a valid employee");
       else 
           { printf("==============================================================================");
		     printf("\nemployee id\tfirst name\tlast name\tdesignation\tsalary\n");
             printf("==============================================================================\n");
			 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n",e[l].e_id,e[l].f_name,e[l].l_name,e[l].des,e[l].sal);
             printf("==============================================================================\n");
		}
		 break;
case 3: update(e,n1);
         break; 
case 4: del(e,n1);
        n1--;
        display(e,n1);
 
          break;
case 5: add(e,n1);
        n1++;
        display(e,n1);

             break;
case 6:sort(e,n1);
       
 
             break;                     
default: printf("\nenter valid option\n");
}
}
while(ch!=0);
}

void create(emp e[25],int n)
{
int i;
for(i=0;i<n;i++)
{
 printf("\nenter employee id\n");
        scanf("%d",&e[i].e_id);
 
 printf("\nenter the first name of employee\n");
        scanf("%s",&e[i].f_name);

 printf("\nenter the last name of employee\n");
        scanf("%s",&e[i].l_name);

 printf("\nenter designation of employee\n");
        scanf("%s",&e[i].des);
 
 printf("\nenter salary\n");
        scanf("%d",&e[i].sal);
}
display(e,n);
}

void display(emp e[25],int n)
{
int i;
   printf("==============================================================================");
   printf("\nemployee id\tfirst name\tlast name\tdesignation\tsalary\n");
   printf("==============================================================================\n");
for(i=0;i<n;i++)
{ 
        printf("%d\t\t",e[i].e_id);
        printf("%s\t\t",e[i].f_name);
        printf("%s\t\t",e[i].l_name);
        printf("%s\t\t",e[i].des);
        printf("%d\t\t",e[i].sal);
        printf("\n");
}
printf("==============================================================================\n\n");
}


 int search(emp e[25],int n)
{
int i,b,pos=-1;
printf("enter employee id :\t");
scanf("%d",&b);
for(i=0;i<n;i++)
{
if(e[i].e_id==b)
{
pos=i;
break;	
}	
}
return pos;
}


void update(emp e[25],int n)
{
 int l;
 l=search(e,n);
 printf("enter new details to update this details\n\n");
 
 printf("\nenter the first name of employee\n");
        scanf("%s",&e[l].f_name);

 printf("\nenter the last name of employee\n");
        scanf("%s",&e[l].l_name);

 printf("\nenter designation of employee\n");
        scanf("%s",&e[l].des);
 
 printf("\nenter salary\n");
        scanf("%d",&e[l].sal);
  
 display(e,n);  	
}

void del(emp e[25],int n)
{
 int i,l;
 l=search(e,n);
 for(i=l;i<=n;i++)
 {
 	e[i].e_id=e[i+1].e_id;
	strcpy(e[i].f_name,e[i+1].f_name); 
    strcpy(e[i].l_name,e[i+1].l_name);
    strcpy(e[i].des,e[i+1].des);
    e[i].sal=e[i+1].sal;
 }	
 }


void add(emp e[25],int n)
{
int i,k,flag=0;
printf("\n\nenter employee id for availability\n");
        scanf("%d",&k);

for(i=0;i<n;i++)
{
if(e[i].e_id==k)
{
	flag=1;
}

}
 if(flag==1)
 {
 	printf("already available enter another employee id");
    add(e,n);
 }
 else
 {
 	printf("\nenter employee id\n");
        scanf("%d",&e[n].e_id);
 
 printf("\nenter the first name of employee\n");
        scanf("%s",&e[n].f_name);

 printf("\nenter the last name of employee\n");
        scanf("%s",&e[n].l_name);

 printf("\nenter designation of employee\n");
        scanf("%s",&e[n].des);
 
 printf("\nenter salary\n");
        scanf("%d",&e[n].sal);
 }
 }

void sort(emp e[25],int n)
{
struct employee t;
int i,j;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(e[j].e_id>e[j+1].e_id)
{
t=e[j];
e[j]=e[j+1];
e[j+1]=t;
}
}
}
display(e,n);
} 


/*
OUTPUT

===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
1

enter the no of records you want to enter:      3

enter employee id
3

enter the first name of employee
sachin

enter the last name of employee
sharma

enter designation of employee
manager

enter salary
122321

enter employee id
1

enter the first name of employee
ashish

enter the last name of employee
verma

enter designation of employee
manager

enter salary
122131

enter employee id
2

enter the first name of employee
sankalp

enter the last name of employee
das

enter designation of employee
manager

enter salary
1231323
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
3               sachin          sharma          manager         122321
1               ashish          verma           manager         122131
2               sankalp         das             manager         1231323
==============================================================================

===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
2
enter employee id :     2
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
2               sankalp         das             manager         1231323
==============================================================================
===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
3
enter employee id :     1
enter new details to update this details


enter the first name of employee
sachin

enter the last name of employee
verma

enter designation of employee
ceo

enter salary
12231423
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
3               sachin          sharma          manager         122321
1               sachin          verma           ceo             12231423
2               sankalp         das             manager         1231323
==============================================================================
===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
5


enter employee id for availability
4

enter employee id
4

enter the first name of employee
manjeet

enter the last name of employee
singh

enter designation of employee
manager

enter salary
211233
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
3               sachin          sharma          ceo             3124332
2               sankalp         das             manager         1221423
1               ashish          verma           mnager          2314445
4               manjeet         singh           manager         211233
==============================================================================

===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
6
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
1               ashish          verma           mnager          2314445
2               sankalp         das             manager         1221423
3               sachin          sharma          ceo             3124332
4               manjeet         singh           manager         211233
==============================================================================

===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================
4
enter employee id :     3
==============================================================================
employee id     first name      last name       designation     salary
==============================================================================
1               ashish          verma           mnager          2314445
2               sankalp         das             manager         1221423
4               manjeet         singh           manager         211233
==============================================================================

===============================
1.create database
2.search details
3.update record at database
4.delete record at database
5.add data to database
6.sort database
===============================
Enter your choice
===============================

*/
