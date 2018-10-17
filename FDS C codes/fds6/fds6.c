#include<stdio.h>
#include<stdlib.h>
typedef struct FO
{
 int roll;
 char name[20];
 float marks;
}stud;
void modify();
void del();
void insert();
void search();
void display();

FILE *masters,*temp;
char ch;
stud st;	
void main()
{
    int n,roll;
    if(!(masters=fopen("masters.txt","r+")))
    masters=fopen("masters.txt","w+");
    do{
printf("\n==============================================\n1.create new file\n2.search\n3.delete data\n4.modify data\n==============================================\nENTER YOUR CHOICE\n");
scanf("%d",&n);
  switch(n)
    {
	    case 1:insert();
	                 break;
	  case 2:search();
	              break;
	  case 3:del();
	               break;
	  case 4:modify();
	               break;
	   default: printf("\nenter a valid option\n\n");              
	}

}while(n!=0);

}

void insert()
{
int a;
printf("\nenter no of entries you want to enter:\t");
scanf("%d",&a);
fseek(masters,0,2);
while(a>0)
{
printf("\n enter roll,name,marks:\t");
scanf("%d%s%f",&st.roll,st.name,&st.marks);
fprintf(masters,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
a--;
}
fclose(masters);
masters=fopen("masters.txt","r+");
display();
}

void display()
{
rewind(masters);
printf("\nROLL\tNAME\tMARKS\n");
	while(!feof(masters))
	{
          fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
		printf("%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
	}
	
}

void search()
{
int roll;
printf("\nenter roll for searching:\t");
scanf("%d",&roll);
rewind(masters);
while(!feof(masters))
{
 fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
 if(st.roll==roll)
 {
 printf("Record found:\n");
 printf("%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
 return;
 }
}
printf("\nrecord not found\n");
}

	
void modify()
{
int i,no;
printf("\nenter record no for updating record:\t");
scanf("%d",&no);
temp=fopen("temp.txt","w+");
rewind(masters);
for(i=1;i<no&&!feof(masters);i++)
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(temp,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
if(feof(masters))
	printf("\nout of range\n");
else
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
    printf("\nenter new roll,new name and new marks:\t");
    scanf("%d%s%f",&st.roll,st.name,&st.marks);
    fprintf(temp,"%d\t%s\t%f\n",st.roll,st.name,st.marks);
while(!feof(masters))
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(temp,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
fclose(masters);
fclose(temp);
masters=fopen("masters.txt","w+");
temp=fopen("temp.txt","r+");
while(!feof(temp))
{
	fscanf(temp,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(masters,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
}
fclose(temp);
display();
}

void del()
{
int i,no;
printf("\nenter record no for deleteing record:\t");
scanf("%d",&no);
temp=fopen("temp.txt","w+");
rewind(masters);
for(i=1;i<no&&!feof(masters);i++)
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(temp,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
if(feof(masters))
	printf("\nout of range\n");
else
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
while(!feof(masters))
{
	fscanf(masters,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(temp,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
fclose(masters);
fclose(temp);
masters=fopen("masters.txt","w+");
temp=fopen("temp.txt","r+");
while(!feof(temp))
{
	fscanf(temp,"%d\t%s\t%f\n",&st.roll,st.name,&st.marks);
	fprintf(masters,"%d\t%s\t%6.2f\n",st.roll,st.name,st.marks);
}
display();
}
fclose(temp);
}


/*
==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
1

enter no of entries you want to enter:  2

 enter roll,name,marks: 1 sachin 78.9

 enter roll,name,marks: 2 ashish 78.8

ROLL    NAME    MARKS
1       sachin   78.90
2       ashish   78.80

==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
2

enter roll for searching:       2
Record found:
2       ashish   78.80

==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
3

enter record no for deleteing record:   1

ROLL    NAME    MARKS
2       ashish   78.80

==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
4

enter record no for updating record:    2

out of range

ROLL    NAME    MARKS
2       ashish   78.80

==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
4

enter record no for updating record:    1

enter new roll,new name and new marks:  1 sachin 89.9

ROLL    NAME    MARKS
1       sachin   89.90

==============================================
1.create new file
2.search
3.delete data
4.modify data
==============================================
ENTER YOUR CHOICE
*/
