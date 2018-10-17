#include<iostream>
#include<string.h>
using namespace std;

class books 
{ public:
  char t[20],au[20],pub[20];
   int pr,as;
  void accept();
  void display();
   void add();
   void update();
   void sb();
   void up();
   void pb();
   void tr();
  }b[20];
  int i,j=5;
  void books::accept()                              //accept
  {
  for(i=0;i<j;i++)
  {
  cout<<"enter title:";
   cin>>b[i].t;
  cout<<"\n"<<"enter author:";
  cin>>b[i].au;
  cout<<"\n"<<"enter publisher:";
  cin>>b[i].pub;
  cout<<"\n"<<"enter price:";
  cin>>b[i].pr;  
 }
  }
  void books::display()                                 //display
  {
  cout<<"Title:"<<"\t\t"<<"Author:"<<"\t\t"<<"Publisher:"<<"\t\t"<<"Price:"<<"\n";
  for(i=0;i<j;i++)
  {
   cout<<b[i].t<<"\t\t"<<b[i].au<<"\t\t\t"<<b[i].pub<<"\t\t\t"<<b[i].pr<<"\n";  
  }
  cout<<"no of books in stock:"<<j<<"\n\n";}
  
  void books::add()                                                //add data
  {  
   cout<<"enter title:";
   cin>>b[i].t;
  cout<<"\n"<<"enter author:";
  cin>>b[i].au;
  cout<<"\n"<<"enter publisher:";
  cin>>b[i].pub;
  cout<<"\n"<<"enter price:";
  cin>>b[i].pr;  
  i++;
  j++;
  }
int main() 
{ int c;
do{
cout<<"enter 1 for accepting details"<<"\n"<<"enter 2 for displaying details"<<"\n"<<"enter 3 to add details\n"<<"enter 4 for searching book details"<<"\n";
cin>>c;
switch(c)
{
   case 1: b[20].accept();
                   break;
   case 2: b[20].display();
                   break;
   case 3: b[20].add();
                break;
   case 4: b[20].sb();
                break;
    default: cout<<"enter option between 1 to 3";
}
}while(c!=0);
}   

void books::sb() 
{
char t2[20];
int l=0;
cout<<"enter title for reqiured book:\t";
cin>>t2; 
for(i=0;i<j;i++)
   {
   if(strcmp(b[i].t,t2)==0)	
     {l=i;
	 break;     	
	 }
   }
   
   cout<<"\n\nTitle:"<<"\t\t"<<"Author:"<<"\t\t"<<"Publisher:"<<"\t\t"<<"Price:"<<"\n";
   cout<<b[l].t<<"\t\t"<<b[l].au<<"\t\t\t"<<b[l].pub<<"\t\t\t"<<b[l].pr<<"\n\n";     
}
