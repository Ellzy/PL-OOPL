#include<iostream>
using namespace std;
class shape
{
public:
double b,l;
virtual void area()
{
}
void accept()
{
 cout <<"\nenter base and hieght \n";
 cin>>b>>l;
}
 }*s;
 
 class triangle:public shape
 {
public:
 void area()
 {
 cout<<"\narea of triangle:\t"<<0.5*b*l;
 }
 }t;
 
 class rectangle:public shape
 {
 public:
 void area()
 {
 cout<<"\narea of triangle:\t"<<b*l;
 }
 }r;
 
 int main()
 {
 int n;
 do{
 cout<<"\n-------------------------------------------------\n1.triangle area\n2.rectangle area\n-------------------------------------------------\nENTER CHOICE\n-------------------------------------------------\n";
 cin>>n;
 switch(n)
 {
 case 1:s=&t;
                s->accept();
                s->area();
                break;
 case 2:s=&r;
                s->accept();
                s->area();
                break;

 default:cout<<"enter valid option";
 } 
 }while(n!=0);
 }
