#include<stdio.h>

typedef struct employee
{
	char emp_first_name[20];
	char emp_last_name[20];
	int emp_id;
	int emp_salary;
	char emp_desig[20];
}emp;

int emp_input(struct employee e[50],int n,int counter)
{	
	int i;
	int counter_temp=counter;
	for(i=counter_temp; i<counter+n; i++)
	{
		printf("\t Enter Employee First Name : \t");
		scanf("%s", e[i].emp_first_name);
		printf("\t Enter Employee Last Name : \t");
		scanf("%s", e[i].emp_last_name);
		printf("\t Enter EMployee ID : \t");
		scanf("%d", &e[i].emp_id);
		printf("\t Enter Employee Salary : \t");
		scanf("%d", &e[i].emp_salary);
		printf("\t Enter Employee Designation : \t");
		scanf("%s", e[i].emp_desig);
		printf("\n \n");
	}
	return counter+n;
}

void emp_output(struct employee e[50], int counter)
{	
	int i;
	for(i=0;i<counter;i++)
	{
		printf("==============================================\n");
		printf("Employee First Name : %s\n",e[i].emp_first_name);
		printf("Employee Last Name : %s\n",e[i].emp_last_name);
		printf("Employee ID : %d\n",e[i].emp_id);
		printf("Employee Salary : %d\n",e[i].emp_salary);
		printf("Employee Designation : %s\n",e[i].emp_desig);
		printf("==============================================\n");
	}
}

int emp_search(struct employee e[50], int n, int counter)
{
	int i,pos = -1;
	for(i=0; i<counter; i++)
	{
	if(e[i].emp_id==n)
	{
		pos=i;
		break;
	}
	}
return pos;
}

void emp_update(struct employee e[50], int n, int counter)
{
	int m;
	m=emp_search(e,n,counter);
	if(m==-1)
	{
		printf("Employee ID not found");
	}
	else
	{
		printf("Enter New First Name : \t");
		scanf("%s",e[m].emp_first_name);
		printf("Enter New Last Name : \t");
		scanf("%s",e[m].emp_last_name);
		printf("Enter New Salary : \t");
		scanf("%d", &e[m].emp_salary);
		printf("Enter New Designaton : \t");
		scanf("%s", e[m].emp_desig);
	}
	printf("Database Updated");
}

int emp_delete(struct employee e[50], int n,int counter)
{
	int flag=0, i;
	flag=emp_search(e,n,counter);
	if(flag==-1)
	{
		printf("Employee ID not found");
	}
	else
	{
	for	(i=flag;i<=counter;i++)
	{
		e[i]=e[i+1];
	}
	}
	printf("Record Deleted");
	return 	counter-1;
}

int menu_return()
{
  int flag=0, a=0;
  puts("\n \n \n \n \n");
  puts("================================");
  puts("| Want to return to main menu? |");
  puts("================================");
  puts("|                              |");
  puts("|   1> return to main menu     |");
  puts("|   2> exit                    |");
  puts("|                              |");
  puts("================================");
  scanf("%d",&a);
  return a;
}

void main()
{
	emp e[50];
	int choice=0, up, del, sea=0, flag1=-1, inputs=0,menu=0,flag=1,counter=0;
	while(flag!=0)
  {
  	printf("\n \n \n \n \n");
	printf("================================\n");
	printf("|      Employee Database       |\n");
	printf("================================\n");
	printf("|                              |\n");
	printf("| 1> Input Data                |\n");
	printf("| 2> Display Data              |\n");
	printf("| 3> Update Data               |\n");
	printf("| 4> Delete Data               |\n");
	printf("| 5> Search Data               |\n");
	printf("|                              |\n");
	printf("================================\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		       printf("\nEnter how many inputs you wanna take : ");
		       scanf("%d",&inputs);
			   int total_count=0;
		       total_count=emp_input(e,inputs,counter);
		       counter=total_count;
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
			   emp_output(e,counter);
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
			   printf("\nEnter the ID for update");
			   scanf("%d",&up);
			   emp_update(e,up,counter);
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
			   printf("\nEnter the ID for deletion");
			   scanf("%d", &del);
			   int del_count=0;
			   del_count=emp_delete(e,del,counter);
			   counter=del_count;
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
			   printf("\nEnter the ID for searching : ");
			   scanf("%d",&sea);
			   flag1=emp_search(e,sea,counter);
			   if(flag1==-1)
			   {
					printf("Employee ID not found");
			   }
			   else
			   {
			   		printf("Employee Found at position : %d\n",(flag1+1));
			   		printf("==============================================\n");
					printf("Employee First Name : %s\n",e[flag1].emp_first_name);
					printf("Employee Last Name : %s\n",e[flag1].emp_last_name);
					printf("Employee ID : %d\n",e[flag1].emp_id);
					printf("Employee Salary : %d\n",e[flag1].emp_salary);
					printf("Employee Designation : %s\n",e[flag1].emp_desig);
					printf("==============================================\n");
			   }
			   break;
			   
		default:
			   printf("\nEnter a correct Value");
			   printf("\nControl will now return to Return Menu");
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
	} 
}
}


