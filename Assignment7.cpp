#include<iostream>
using namespace std;
template <class t>
class matrix
{
public:
	t a[10][10];
	int r,c;
	void getit();
	void display();
	void addition(matrix);
	void substraction(matrix);
	void multiplication(matrix);
	void transpose();
	int check_row_col_equality(matrix);
	void get_rows_cols();
};

template <class t>
int matrix<t>::check_row_col_equality(matrix<t> m)
{
	if(r==m.r&&c==m.c)
		return 0;
	else
		return 1;
}

template <class t>
void matrix<t>::get_rows_cols()
{
	cout<<"\nEnter rows:";
	cin>>r;
	cout<<"Enter columns:";
	cin>>c;
	cout<<"\n";
}

template <class t>
void matrix<t>::getit()
{
	for (int s=0; s<r; s++)
	{
		for(int d=0; d<c; d++)
		{
		cout<<"Enter element in the matrix at ["<<s<<"]["<<d<<"]";
			cin>>a[s][d];
		}
	}
}

template <class t>
void matrix<t>::display()
{
	for (int s=0;s<r;s++)
	{
		for(int d=0;d<c;d++)
		{
			cout<<"\t"<<a[s][d];
		}
		cout<<"\n";
	}
}

template <class t>
void matrix<t>::addition(matrix<t> m)
{
	matrix<t> temp;
	for (int s=0; s<r; s++)
	{
		for(int d=0; d<c; d++)
		{
			temp.a[s][d]=a[s][d]+m.a[s][d];
		}
	}
	temp.r=r;
	temp.c=c;

	cout<<"\nAddition of two given matrix:\n";
	temp.display();
}

template <class t>
void matrix<t>::substraction(matrix<t> m)
{
	matrix<t> temp;
	for (int s=0; s<r; s++)
	{
		for(int d=0; d<c; d++)
		{
			temp.a[s][d]=a[s][d]-m.a[s][d];
		}
	}
	temp.r=r;
	temp.c=c;

	cout<<"\nSubstraction of two given matrix:\n";
	temp.display();
}

template <class t>
void matrix<t>::transpose()
{
	matrix<t> temp;
	for (int s=0; s<r; s++)
	{
		for(int d=0; d<c; d++)
		{
			temp.a[s][d]=a[d][s];
		}
	}
	cout<<"\nThe given matrix is\n";
	display();
	temp.r=temp.c=r;

	cout<<"\nTranspose of the given matrix:\n";
	temp.display();
}
template <class t>
void matrix<t>::multiplication(matrix<t> m)
{
	t sum;
	matrix<t> temp;
	for (int s=0; s<r; s++)
	{
		for(int d=0; d<m.c; d++)
		{
			sum=0;
			for(int e=0; e<c; e++)
				sum=sum+(a[s][e]*m.a[e][d]);
			temp.a[s][d]=sum;
		}
	}
	cout<<"\nMultiplication of two given matrix:\n";
	temp.r=r;
	temp.c=m.c;

	temp.display();
}
int main()
{
int ch1,ch;
do
{
cout<<"\t\tMatrix Operations.\nO which data type do you want to operate?\n 1.Integer\n 2.Float\n 3.Exit\nEnter choice->";
cin>>ch1;
switch(ch1)
{
case 1: matrix<int> m1,m2;
do
{
cout<<"\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Transpose\n 5.Done\nEnter choice->";
cin>>ch;
switch(ch)
{
case 1:	cout<<"\n\t\tAddition";
cout<<"\nMatrix 1:\n";
m1.get_rows_cols();
m1.getit();
cout<<"\nMatrix 2:\n";
m2.get_rows_cols();
if(m1.check_row_col_equality(m2)==1)
{
cout<<"Invalid Entry : Operation not possible";
break;
}
m2.getit();
m1.addition(m2);
break;
case 2:	cout<<"\n\t\tSubtraction.";
cout<<"\nMatrix 1:\n";
m1.get_rows_cols();
m1.getit();
cout<<"\nMatrix 2:\n";
m2.get_rows_cols();
if(m1.check_row_col_equality(m2)==1)
{
cout<<"Invalid Entry : Operation not possible";
break;
}
m2.getit();
m1.substraction(m2);
break;
case 3:	cout<<"\n\t\tMultiplication";
cout<<"\nMatrix 1:\n";
m1.get_rows_cols();
m1.getit();
cout<<"\nMatrix 2:\n";
m2.get_rows_cols();
if(m1.c!=m2.r)
{
cout<<"\nMultiplication not possible.";
break;
}
m2.getit();
m1.multiplication(m2);
break;
case 4:	cout<<"\n\t\tTranspose.";
cout<<"\nMatrix :\n";
m1.get_rows_cols();
if(m1.r!=m1.c)
{
cout<<"Transpose not possible.";
break;
}
m1.getit();
m1.transpose();
break;
}
}while(ch!=5);
break;
case 2:	matrix<float> m3,m4;
do
{
cout<<"\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Transpose\n 5.Done\nEnter choice->";
cin>>ch;
switch(ch)
{
case 1:	cout<<"\n\t\tAddition";
cout<<"\nMatrix 1:\n";
m3.get_rows_cols();
m4.getit();
cout<<"\nMatrix 2:\n";
m4.get_rows_cols();
if(m3.check_row_col_equality(m4)==1)
{
cout<<"Invalid Entry : Operation not possible";
break;
}
m3.getit();
m3.addition(m4);
break;
case 2:	cout<<"\n\t\tSubtraction.";
cout<<"\nMatrix 1:\n";
m3.getit();
cout<<"\nMatrix 2:\n";
m4.get_rows_cols();
if(m3.check_row_col_equality(m4)==1)
{
cout<<"Invalid Entry : Operation not possible";
break;
}
m4.getit();
m3.substraction(m4);
break;
case 3:	cout<<"\n\t\tMultiplication";
cout<<"\nMatrix 1:\n";
m3.get_rows_cols();
m3.getit();
cout<<"\nMatrix 2:\n";
m4.get_rows_cols();
if(m3.c!=m4.r)
{
cout<<"\nMultiplication not possible.";
break;
}
m4.getit();
m3.multiplication(m4);
break;
case 4:	cout<<"\n\t\tTranspose.";
cout<<"\nMatrix :\n";
m3.get_rows_cols();
if(m3.r!=m3.c)
{
cout<<"Transpose not possible.";
break;
}
m3.getit();
m3.transpose();
break;
}
}while(ch!=5);
break;
}
}while(ch1!=3);
return 0;
}
