#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll_no;
	char name[20];
	float marks;
}stud;
void search();
void insert();
void modify();
void del();
void print();
FILE *masters; FILE *temp;
void main()
{
	int ch, roll;
	if(!(masters=fopen("masters.txt","r+")))
	masters=fopen("masters.txt", "w+");
	do
	{
		printf("\n 1 Insert a record\n 2. Search a record\n 3. Modify a record\n 4. Delete a record\n 5. Display a record\n 6.Exit\n Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
			search();
			break;
			case 3:
			modify();
			break;
			case 4:
			del();
			break;
			case 5:
			print();
			break;
			case 6: printf("\n Have a nice day!!! \n");
			break;
			default:
			printf("\n Invalid Choice ! Please enter your choice again \n");
			break;
		}
	}while(ch!=6);
}

void insert()
{
	stud st;
	fseek(masters,0,2);
	printf("\n Enter the name, roll no and marks :");
	scanf("%s %d %f", st.name, &st.roll_no, &st.marks);
	fprintf(masters, "%s\t%d\t%6.2f\n",st.name,st.roll_no, st.marks);
	fclose(masters);
	masters=fopen("masters.txt", "r+");
}

void search()
{
	stud st;
	int roll;
	printf("\n Enter the roll_no that you want to search for : ");
	scanf("%d", &roll);
	rewind(masters);
	while(!feof(masters))
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		if(st.roll_no==roll)
		{
			fscanf(masters,"%s\t%d\t%f\n",st.name,st.roll_no, st.marks);
			return;
		}
	}
	printf("\n Record not found");
}

void del()
{
	stud st;
	int recno,i;
	printf("\n Enter the record no. that is to be deleted :");
	scanf("%d",&recno);
	FILE *temps;
	temps=fopen("temps.txt","w+");
	rewind(masters);
	for(i=1;i=recno && !feof(masters);i++)
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		fprintf(temps,"%s\t%d\t%f\n",st.name,st.roll_no,st.marks);
	}
	if(feof(masters))
		printf("\n Record out of range");
	else
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		while(!feof(masters))
		{
			fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
			fprintf(temps,"%s\t%d\t%f\n",st.name,st.roll_no,st.marks);
		}
		fclose(masters);
		fclose(temps);
		masters=fopen("masters.txt","w+");
		temps=fopen("temps.txt","r+");
		while(!feof(temps))
		{
			fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
			fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
		}
	}
	close(temps);
}

void print()
{
	stud st;
	FILE *temps;
	rewind(masters);
	printf("\nName\t Roll no.\tMarks");
	while(!feof(masters))
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
	}
}

void modify()
{
	stud st;
	FILE *temps;
	int recno,i;
	printf("\n Enter the record no. that is to be modified");
	scanf("%d",&recno);
	temps=fopen("temps.txt","w+");
	rewind(masters);
	for(i=1;i<recno && !feof(masters);i++)
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
	}
	if(feof(masters))
		printf("\n Record out of range");
	else
	{
		fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
		printf("\n Enter the new name, roll no. and marks : ");
		scanf("%S %d %f",st.name,&st.roll_no,&st.marks);
		fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
		while(!feof(masters))
		{
			fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
			fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
		}	
		fclose(masters);
		fclose(temps);
		masters=fopen("masters.txt","w+");
		temps=fopen("temps.txt","r+");
		while(!feof(temps))
		{
			fscanf(masters,"%s\t%d\t%f\n",st.name,&st.roll_no,&st.marks);
			fprintf(temps,"%s\t%d\t%6.3f\n",st.name,st.roll_no,st.marks);
		}
	}
	fclose(temps);
}
