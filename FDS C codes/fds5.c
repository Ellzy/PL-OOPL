#include<stdio.h>
#include<string.h>
void accept(char[50][50],int);
void display(char[50][50],int);
void b_sort(char[50][50],int);
void s_sort(char[50][50],int);
void i_sort(char[50][50],int);
int b_search(char[50][50],int,int,int,char[50]);
int l_search(char[50][50],int,char[50]);

int i,j;

void main()
{
char a[50][50],k[50];
int n,h,l,ch,pos;
do
{
printf("\n=======================================================\n1.accept string\n2.bubble sort\n3.selection sort\n4.insertion sort\n5.binary search\n6.linear search\n7.exit\n=======================================================\nenter choice\n=======================================================\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\nenter no of records you want to enter:\t");
       scanf("%d",&n);
       accept(a,n);
       break;
case 2:b_sort(a,n);
       break;
case 3:s_sort(a,n);
       break;
case 4:i_sort(a,n);
       break;
case 5:printf("\n\nenter string to search\n\n");
       h=n-1;
       l=0;
       scanf("%s",k);
       pos=b_search(a,h,l,n,k);
       if(pos==-1)
         {
          printf("record not found\n\n");
          }
       else
         {
          printf("%s is present at %d position",k,pos+1);
         }
       break;
case 6:printf("\n\nenter string to search\n\n"); 
       scanf("%s",k);
       pos=l_search(a,n,k);
	   if(pos==-1)
         {
          printf("record not found\n\n");
          }
       else
         {
          printf("%s is present at %d position",k,pos+1);
         }
       break;	         
case 7:break;                       
default:printf("\n\nenter valid option\n\n");
}
}while(ch!=7);
}

void accept(char a[50][50],int n)
{
for(i=0;i<n;i++)
{
printf("\nenter string:\t");
scanf("%s",a[i]);
}
display(a,n);
}

void display(char a[50][50],int n)
{
printf("\n");
for(i=0;i<n;i++)
{
printf("%d.",i+1);
printf("%s",a[i]);
printf("\n");
}

}

int b_search(char a[50][50],int high,int low,int n,char key[50])
{
int mid,pos=-1;
if(low<=high)
{
mid=(low+high)/2;
if(strcmp(a[mid],key)==0)
{
pos=mid;
}
if(strcmp(a[mid],key)>0)
{
high=mid-1;
return b_search(a,high,low,n,key);
}
if(strcmp(a[mid],key)<0)
{
low=mid+1;
return b_search(a,high,low,n,key);
}
}
return pos;
}

l_search(char a[50][50],int n,char key[50])
{
int i,pos=-1;
for(i=0;i<n;i++)
{
if(strcmp(a[i],key)==0)
{
pos=i;
break;	
}	
}
return pos;
}

void b_sort(char a[50][50],int n)
{
char t[50];
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(strcmp(a[j],a[j+1])>0)
{
strcpy(t,a[j]);
strcpy(a[j],a[j+1]);
strcpy(a[j+1],t);
}
}
}
printf("\nsorted string is:\n");
display(a,n);
}

void s_sort(char a[50][50],int n)
{
int pos;
char t[50],min[50];
for(i=0;i<n;i++)
{
strcpy(min,a[i]);
pos=i;
for(j=i+1;j<n;j++)
{
if(strcmp(min,a[j])>0)
 {
  pos=j;
  strcpy(min,a[j]);
 }
}
strcpy(t,a[i]);
strcpy(a[i],a[pos]);
strcpy(a[pos],t);
}
printf("\nsorted string is:\n");
display(a,n);	
}

void i_sort(char a[50][50],int n)
{
char t[50];
for(i=0;i<n;i++)
{
	strcpy(t,a[i]);
for(j=i-1;j>=0;j--)
{
if(strcmp(t,a[j])<0)
{
 strcpy(a[j+1],a[j]);
}
else
break;
}
strcpy(a[j+1],t);
}
printf("\nsorted string is:\n");
display(a,n);
}

/*

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
1


enter no of records you want to enter:  3

enter string:   sachin

enter string:   ashish

enter string:   nigam

1.sachin
2.ashish
3.nigam

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
2

sorted string is:

1.ashish
2.nigam
3.sachin

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
1


enter no of records you want to enter:  3

enter string:   sachin

enter string:   ashish

enter string:   nigam

1.sachin
2.ashish
3.nigam

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
3

sorted string is:

1.ashish
2.nigam
3.sachin

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
1


enter no of records you want to enter:  3

enter string:   sachin

enter string:   ashish

enter string:   nigam

1.sachin
2.ashish
3.nigam

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
4

sorted string is:

1.ashish
2.nigam
3.sachin

=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
5


enter string to search

nigam

nigam is present at 2 position
=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================
6


enter string to search

sachin

sachin is present at 3 position
=======================================================
1.accept string
2.bubble sort
3.selection sort
4.insertion sort
5.binary search
6.linear search
7.exit
=======================================================
enter choice
=======================================================

*/
