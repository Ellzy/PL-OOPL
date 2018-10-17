#include<iostream>
#include<string.h>
using namespace std;

int i,m;

class BIO
{
public:	
	int d,m,y;
	char name[20],bg;
     
};

class HEALTH
{
public:	
	int h,w;
    
};

class ADDRESS
{
public:	
	char pol[20];
	char add[100];
    
};

class tele:public BIO,public HEALTH,public ADDRESS
{
public:
	long int tel_no;
	char lic[20];
	void accept();
    void display();
	int search();
	void del();
	void update();
}a[20];


void tele::accept()
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
		cout<<"\nenter blood group:\t";
		cin>>a[i].bg;
        cout<<"\nenter height in cm:\t";
		cin>>a[i].h;
		cout<<"\nenter weight in kg:\t";
		cin>>a[i].w;
		cout<<"\nenter insurance no:\t";
		cin>>a[i].pol;
        cout<<"\nenter address:\t";
		cin>>a[i].add;
		cout<<"\nenter telephone no:\t";
		cin>>a[i].tel_no;
		cout<<"\nenter driving license no:\t";
		cin>>a[i].lic;
		}
	 
}

void tele::display()
{
	   cout<<"\n\nName\tDOP\tBlood Group\tHeight\tWeight\tPolicy no\tAddress\tTelephone\tDriving license\n";
		for(i=0;i<m;i++){
		cout<<a[i].name<<"\t"<<a[i].d<<"/"<<a[i].m<<"/"<<a[i].y<<"\t"<<a[i].bg<<"\t"<<a[i].h<<"cm"<<"\t"<<a[i].w<<"kg\t"<<a[i].pol<<"\t\t"<<a[i].add<<"\t"<<a[i].tel_no<<"\t"<<a[i].lic<<"\n";
	                }
	  
	
}

int main()
{
	int n,l;
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
	           a[20].display();
	           break;
		default:cout<<"enter valid option";
	 }
	}while(n!=0);
}


int tele::search()
{
char name[20];
cout<<"\nenter name to search data:\t";
cin>>name;

for(i=0;i<m;i++)
{
	if(strcmp(a[i].name,name)==0)
	    {
		cout<<"\n\nName\tDOP\tBlood Group\tHeight\tWeight\tPolicy no\tAddress\tTelephone\tDriving license\n";
	    cout<<a[i].name<<"\t"<<a[i].d<<"/"<<a[i].m<<"/"<<a[i].y<<"\t"<<a[i].bg<<"\t"<<a[i].h<<"cm"<<"\t"<<a[i].w<<"kg\t"<<a[i].pol<<"\t\t"<<a[i].add<<"\t"<<a[i].tel_no<<"\t"<<a[i].lic<<"\n";
	    return i;
		}
}

}

void tele::update()
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
		cout<<"\nenter new blood group:\t";
		cin>>a[u].bg;
        cout<<"\nenter new height in cm:\t";
		cin>>a[u].h;
		cout<<"\nenter new weight in kg:\t";
		cin>>a[u].w;
		cout<<"\nenter new insurance no:\t";
		cin>>a[u].pol;
        cout<<"\nenter new address:\t";
		cin>>a[u].add;
		cout<<"\nenter new telephone no:\t";
		cin>>a[u].tel_no;
		cout<<"\nenter new driving license no:\t";
		cin>>a[u].lic;

}

void tele::del()
{
	int l;
	l=a[20].search();
    for(i=l;i<=m;i++)
    {
	strcpy(a[i].name,a[i+1].name);
	a[i].d=a[i+1].d;
	a[i].m=a[i+1].m;
    a[i].y=a[i+1].y;
    a[i].bg=a[i+1].bg;
    a[i].h=a[i+1].h;
    a[i].w=a[i+1].w;
    strcpy(a[i].pol,a[i+1].pol);
    strcpy(a[i].add,a[i+1].add);
    a[i].tel_no=a[i+1].tel_no;
    strcpy(a[i].lic,a[i+1].lic);
	}
}
