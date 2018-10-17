#include<iostream>
using namespace std;
int i;
class pers
{
 public:
 char name[20];
 int dob,age; 
 
};
class prof
{
 public:
 char office_name;
  
};
class acad:public pers,public prof
{
 public:
 int marks,pass_out;
 char clg_name;
 void accept();
 void display();   
}e3[20];
void acad::accept()
{
 cout<<"\nname of student\n";
 cin>>e3[i].name;
 cout<<"\nage\n";
 cin>>e3[i].age;
 cout<<"\nDate of Birth\n";
 cin>>e3[i].dob;
 cout<<"\nname of college\n";
 cin>>e3[i].dob;
 cout<<"\nMarks\n";
 cin>>e3[i].marks;
 cout<<"\nPassout year\n";
 cin>>e3[i].marks;
 
}
void acad::display()
{
 int n;
 cout<<"\nName"<<"\t"<<"Age"<<"\t"<<"DOB"<<"\t"<<"clg name"<<"\t"<<"Marks"<<"\t"<<"Passout year\n";
 for(i=0;i<n;i++)
 {
 cout<<e3[i].name<<e3[i].age<<e3[i].dob<<e3[i].dob<<e3[i].marks<<e3[i].marks;
 }
 }
 int main()
 {int ch;
  do
  {
   cout<<"\nMENU\n"<<"\n1.accept\n2.display\n3.Exit\n";
   cout<<"Enter your chioice";
   cin>>ch;
   switch(ch)
   {
    case 1:e3[20].accept();
          break;
    case 2:e3[20].display();
          break;
   }
  }while(ch!=3);
 }  
