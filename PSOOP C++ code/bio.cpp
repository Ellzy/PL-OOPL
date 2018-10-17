#include<iostream>
#include<string.h>
using namespace std;

int i,m;

class pro
{
public:	
	int exp;
	char des[20];
	char com[20];   
};

class acd
{
public:	
	char sch[20];
     float marks;     
};

class per:public pro,public acd
{
public:	
	int d,m,y,age;
	char name[20];
      void accept();
      void display();
      int search();
      void del();
      void update();
}a[20];

void per::accept()
{
  cout<<"enter no of data you want to enter:\t";
    cin>>m;
   
	  for(i=0;i<m;i++){
		cout<<"enter name:\t";
		cin>>a[i].name;
		cout<<"\nenter day of birth:\t";
		cin>>a[i].d;
		cout<<"\nenter month of birth:\t";
		cin>>a[i].m;
		cout<<"\nenter year of birth:\t";
		cin>>a[i].y;
		cout<<"\nenter age:\t";
		cin>>a[i].age;
        cout<<"\nenter name of school:\t";
		cin>>a[i].sch;
		cout<<"\nenter marks in %:\t";
		cin>>a[i].marks;
		cout<<"\nenter name of company:\t";
		cin>>a[i].com;
		cout<<"\nenter experience of employee in years:\t";
		cin>>a[i].exp;
        cout<<"\nenter designation of employee:\t";
		cin>>a[i].des;
		}
	 
}

void per::display()
{
	   cout<<"\n\nName\tDOP\t\tAge\tSchool\tMarks\tCompany\tExperience\tDesignation\n";
		for(i=0;i<m;i++){
		cout<<a[i].name<<"\t"<<a[i].d<<"/"<<a[i].m<<"/"<<a[i].y<<"\t"<<a[i].age<<"\t"<<a[i].sch<<"\t"<<a[i].marks<<"%\t"<<a[i].com<<"\t"<<a[i].exp<<"years"<<"\t\t"<<a[i].des<<"\n";
	                }
	  
	
}

int main()
{
	int n;
	do{
		cout<<"\n\n=============================================\n1.accept info\n2.search\n3.update\n4.delete\n=============================================\nenter choice\n=============================================\n";
		cin>>n;
     switch(n)
     {
     	case 1:a[20].accept();
     	               a[20].display();
     	              break;
     	case 2:a[20].search();
     	               break;
        case 3:a[20].update();
                      a[20].display();
			       break;
	    case 4:a[20].del();
	                  m--;
	                  a[20].display();
	                  break;
		default:cout<<"\nenter valid option\n";
	 }
	}while(n!=0);
}


int per::search()
{
char name[20];
cout<<"\nenter name to search data:\t";
cin>>name;

for(i=0;i<m;i++)
{
	if(strcmp(a[i].name,name)==0)
	    {
		 cout<<"\n\nName\tDOP\t\tAge\tSchool\tMarks\tCompany\tExperience\tDesignation\n";
		cout<<a[i].name<<"\t"<<a[i].d<<"/"<<a[i].m<<"/"<<a[i].y<<"\t"<<a[i].age<<"\t"<<a[i].sch<<"\t"<<a[i].marks<<"%\t"<<a[i].com<<"\t"<<a[i].exp<<"years"<<"\t\t"<<a[i].des<<"\n";
	    return i;
		}
}
}
void per::update()
{
	int u;
	u=a[20].search();
	cout<<"enter new name:\t";
		cin>>a[u].name;
		cout<<"\nenter new day of birth:\t";
		cin>>a[u].d;
		cout<<"\nenter new month of birth:\t";
		cin>>a[u].m;
		cout<<"\nenter new year of birth:\t";
		cin>>a[u].y;
		cout<<"\nenter new age:\t";
		cin>>a[u].age;
        cout<<"\nenter new school name :\t";
		cin>>a[u].sch;
		cout<<"\nenter new marks in %:\t";
		cin>>a[u].marks;
		cout<<"\nenter new company name:\t";
		cin>>a[u].com;
        cout<<"\nenter new experience in years:\t";
		cin>>a[u].exp;
		cout<<"\nenter new designation:\t";
		cin>>a[u].des;
}

void per::del()
{
	int l;
	l=a[20].search();
    for(i=l;i<=m;i++)
    {
	strcpy(a[i].name,a[i+1].name);
	a[i].d=a[i+1].d;
	a[i].m=a[i+1].m;
    a[i].y=a[i+1].y;
    a[i].age=a[i+1].age;
    strcpy(a[i].sch,a[i+1].sch);
    a[i].marks=a[i+1].marks;
    strcpy(a[i].com,a[i+1].com);
    a[i].exp=a[i+1].exp;
    strcpy(a[i].des,a[i+1].des);
	}
}
