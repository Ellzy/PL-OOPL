#include<iostream>
using namespace std;
class complex
{
public:
float real,img;
void accept();
void display();
friend complex operator+(complex,complex);
friend complex operator-(complex,complex);
complex operator*(complex);
complex operator/(complex);
}o1,o2,o3;
 
 int main() 
 {int n,l;
 
 do{
 cout<<"\n--------------------------------------------------------------------------------------\nenter 1 for accepting data\nenter 2 for displaying data\nenter 3 for addition of both complex no\nenter 4 for substraction of both complex no\nenter 5 for product of both complex number\nenter 6 for qoutient of both complex number\nenter 7 for exit\n--------------------------------------------------------------------------------------\n";
 cin>>n;
 
 switch(n){
  case 1: o1.accept();
              o2.accept();
              break;
  case 2: cout<<"\n1st complex number:\t";
              o1.display();
              cout<<"\n2nd complex number:\t";
              o2.display();
              break;
   case 3: o3=o1+o2;
              cout<<"\nthe sum of both complex number:\t";
              o3.display();
              break;              
   case 4: o3=o1-o2;
              cout<<"\nthe difference of both complex number:\t";
              o3.display();
              break;   
   case 5: o3=o1*o2;           
              cout<<"\nthe product of both complex number:\t";
              o3.display();
              break;
  case 6: o3=o1/o2;           
              cout<<"\nthe qoutient of both complex number:\t";
              o3.display();
              break;
  case 7: break;            
   default: cout<<"\nenter valid option\n";         
               }
 }while(n!=7);
 }
 
 void complex::accept()
    {cout<<"\nenter real part of complex no\n";
       cin>>real;
     cout<<"\nenter imaginary part of  complex no\n";
       cin>>img;
         }
 
 void complex::display()
 { cout<<real<<"+"<<img<<"i\n";
 }
 
 complex operator+(complex,complex)
{
o3.real=o1.real+o2.real;
o3.img=o1.img+o2.img;
return o3;
}

complex operator-(complex,complex)
{
o3.real=o1.real-o2.real;
o3.img=o1.img-o2.img;
return o3;
}

complex complex::operator*(complex)
{
o3.real=(o1.real*o2.real)+(o1.img*o2.img*(-1));
o3.img=(o1.img*o2.real)+(o1.real*o2.img);
return o3;
}

complex complex::operator/(complex)
{
o3.real=((o1.real*o2.real)+(o1.img*o2.img))/((o2.real*o2.real)+(o2.img*o2.img));
o3.img=((o1.img*o2.real)-(o1.real*o2.img))/((o2.real*o2.real)+(o2.img*o2.img));
return o3;
}


/* OUTPUT


--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
1

enter real part of complex no
2

enter imaginary part of  complex no
3

enter real part of complex no
4

enter imaginary part of  complex no
3

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
2

1st complex number:     2+3i

2nd complex number:     4+3i

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
3

the sum of both complex number: 6+6i

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
4

the difference of both complex number:  -2+0i

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
5

the product of both complex number:     -1+18i

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
6

the qoutient of both complex number:    0.68+0.24i

--------------------------------------------------------------------------------------
enter 1 for accepting data
enter 2 for displaying data
enter 3 for addition of both complex no
enter 4 for substraction of both complex no
enter 5 for product of both complex number
enter 6 for qoutient of both complex number
enter 7 for exit
--------------------------------------------------------------------------------------
*/
