#include<stdio.h>

void accept(int[10],int);
void display(int[10],int);
void quick_sort(int[10],int,int);
int partition(int[10],int,int);

void main()
{
int n,a[10],l,h,m;
do{
printf("\n============================\n1.accept array\n2.quick sort\n============================\nEnter choice\n============================\n");
scanf("%d",&n);

switch(n)
{
case 1:printf("\nenter no of elements you want to enter:\t");
           scanf("%d",&m);
           accept(a,m);
           break;
case 2:l=0;
           h=m-1;
           quick_sort(a,l,h);
           display(a,m);           
           break;
default:printf("\nenter a valid option\n\n");                      
}
}while(n!=3);
}

void accept(int a[10],int m)
{
int i;
printf("\nenter data\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
display(a,m);}

void display(int a[10],int m)
{
int i;
printf("\ndata\n{\t");
for(i=0;i<m;i++)
{
printf("%d\t",a[i]);
}
printf("}\n");
}

void quick_sort(int a[10],int low,int high)
{

int pos;
if(low<=high)
{
pos=partition(a,low,high);
quick_sort(a,low,(pos-1));
quick_sort(a,(pos+1),high);
}
}

int partition(int a[10],int low,int high)
{
int i,j,pivot,temp;
i=low+1;
j=high;
pivot=a[low];
while(i<=j)
{
while(a[i]<pivot)
i++;
while(a[j]>pivot)
j--;
if(i<j)
{                                     
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[low];
a[low]=a[j];
a[j]=temp;

printf("\nAfter partition\n{\t");
for(i=low;i<=high;i++)
{
printf("%d\t",a[i]);
}
printf("}\n");

return j;
}

/*

============================
1.accept array
2.quick sort
============================
Enter choice
============================
1

enter no of elements you want to enter: 5

enter data
1
5
8
9
2

data
{       1       5       8       9       2       }

============================
1.accept array
2.quick sort
============================
Enter choice
============================
2

After partition
{       1       5       8       9       2       }

After partition
{       2       5       9       8       }

After partition
{       2       }

After partition
{       8       9       }

After partition
{       8       }

data
{       1       2       5       8       9       }

============================
1.accept array
2.quick sort
============================
Enter choice
============================

*/
