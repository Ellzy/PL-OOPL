#include<iostream>
using namespace std;

class pr
{
public:
float x,y;
void accept();
void div();
}p;

void pr::accept()
{
cout<<"\nenter two no.s:\t";
cin>>x>>y;
}

void pr::div()
{
float c;
try
{
if(y==0)
throw y;
else
{
c=x/y;
cout<<"\ndivision of two no.s:\t";
cout<<c;
}
}
catch(int i)
{
cout<<"\nenter a no. other than:\t"<<i<<"\n";
}
}

int main()
{
int n;
do{
cout<<"\n1.Accept\n2.division\nEnter your choice\n\n";
cin>>n;
switch(n)
{
case 1:p.accept();
              break;
case 2:p.div();
               break;
default: cout<<"\nenter valid option\n";                            
}
}while(n!=0);
}
