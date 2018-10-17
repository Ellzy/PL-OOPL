#include<stdio.h>

void accept(int [10][10],int,int);
void display(int [10][10],int,int);
int convert(int [10][10],int[10][3],int,int);
void displays(int [10][3],int);
void add(int [10][3],int [10][3],int [10][3]);
void trans(int [10][3],int [10][3]);
void ftrans(int [10][3],int [10][3]);

int i,j,k;

void main()
{
int n,a[10][10],b[10][10],c[10][3],d[10][3],e[10][3],f[10][3],g[10][3],r1,c1,r2,c2,l1,l2;
do{
printf("\n\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n1.Accept normal Matrix\n2.Convert into sparse matrix\n3.Add sparse matrix\n4.transpose sparse matrix\n5.fast transpose sparse matrix\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\nEnter choice\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n\n");
scanf("%d",&n);
switch(n)
{
case 1:printf("\nenter row and col for 1st:\t");
            scanf("%d%d",&r1,&c1);
            printf("\nenter data for 1st  matrix\n");
            accept(a,r1,c1);
            printf("\nenter row and col for 2nd:\t");
            scanf("%d%d",&r2,&c2);
            printf("\nenter data for 2nd matrix\n");
            accept(b,r2,c2);
               printf("\n1st  matrix\n");
            display(a,r1,c1);
               printf("\n2nd matrix\n");
            display(b,r2,c2);
           break;
case 2:l1=convert(a,c,r1,c1);
            printf("\n1st  sparse matrix\n");
           displays(c,l1);
           l2=convert(b,d,r2,c2);
            printf("\n2nd  sparse matrix\n");
           displays(d,l2);
           break;
case 3:printf("\nsum of both sparse matrix\n");
            add(c,d,g); 
            break;
case 4:printf("\ntranspose:\n");
            trans(c,e);
            displays(e,l1);
            printf("\n2nd transpose:\n");
            trans(d,f);
            displays(f,l2);
            break;          
case 5:printf("\ntranspose:\n");
            ftrans(c,e);
            displays(e,l1);
            printf("\n2nd transpose:\n");
            ftrans(d,f);
            displays(f,l2);
            break;              
default:printf("\nenter a valid option\n");
                      }
}while(n!=0);

}

void accept(int a[10][10],int r,int c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}

void display(int a[10][10],int r,int c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}

int convert(int a[10][10],int c[10][3],int r,int p)
{
k=1;

for(i=0;i<r;i++)
{
for(j=0;j<p;j++)
{
if(a[i][j]!=0)
{
c[k][0]=i;
c[k][1]=j;
c[k][2]=a[i][j];
k++;
}
}
}
c[0][0]=r;
c[0][1]=p;
c[0][2]=k-1;
return k;
}

void displays(int c[10][3],int z)
{
printf("%d\t%d\t%d\n",c[0][0],c[0][1],c[0][2]);
printf("-------+-------+-------+\n");
for(i=1;i<z;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

void add(int a[10][3],int b[10][3],int g[10][3])
{
i=1,j=1,k=1;
int next,last;

while(i<=a[0][2]&&j<=b[0][2])
{
if(a[i][0]<b[j][0])
{
g[k][0]=a[i][0];
g[k][1]=a[i][1];
g[k][2]=a[i][2];
i++;
k++;
goto next;
}
if(a[i][0]>b[j][0])
{
g[k][0]=b[j][0];
g[k][1]=b[j][1];
g[k][2]=b[j][2];
j++;
k++;
goto next;
}
if(a[i][1]<b[j][1])
{
g[k][0]=a[i][0];
g[k][1]=a[i][1];
g[k][2]=a[i][2];
i++;
k++;
goto next;
}
if(a[i][1]>b[j][1])
{
g[k][0]=b[j][0];
g[k][1]=b[j][1];
g[k][2]=b[j][2];
j++;
k++;
goto next;
}
g[k][0]=b[j][0];
g[k][1]=b[j][1];
g[k][2]=a[i][2]+b[j][2];
j++;
k++;
i++;
next:;
}
while(i<=a[0][2])
{
g[k][0]=a[i][0];
g[k][1]=a[i][1];
g[k][2]=a[i][2];
i++;
k++;
}
while(j<=b[0][2])
{
g[k][0]=b[j][0];
g[k][1]=b[j][1];
g[k][2]=b[j][2];
j++;
k++;
}
g[0][0]=a[0][0];
g[0][1]=a[0][1];
g[0][2]=k-1;

displays(g,k);
}

void trans(int m[10][3],int t[10][3])
{
int n=1;
for(j=0;j<m[0][1];j++)
{
for(i=1;i<=m[0][2];i++)
{
if(m[i][1]==j)
{
t[n][0]=m[i][1];
t[n][1]=m[i][0];
t[n][2]=m[i][2];
n++;
}
}
}
t[0][0]=m[0][1];
t[0][1]=m[0][0];
t[0][2]=m[0][2];
}

void ftrans(int m[10][3],int t[10][3])
{
int total[50],index[50],pos=0,col=0;
 for(i=0;i<m[0][2];i++)
 {
 total[i]=0;
 }
 t[0][0]=m[0][1];
 t[0][1]=m[0][0];
 t[0][2]=m[0][2];
for(i=1;i<=m[0][2];i++)
{
col=m[i][1];
total[col]++;
}
index[0]=1;
for(i=1;i<m[0][1];i++)
{
index[i]=index[i-1]+total[i-1];
}
for(i=1;i<=m[0][2];i++)
{
col=m[i][1];
pos=index[col];
t[pos][0]=m[i][1];
t[pos][1]=m[i][0];
t[pos][2]=m[i][2];
index[col]++;
}
}

/*
OUTPUT



-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

1

enter row and col for 1st:      2 3

enter data for 1st  matrix
1 2 3 0 0 0

enter row and col for 2nd:      3 3

enter data for 2nd matrix
1 2 3 0 4 0  0 0 8

1st  matrix
1       2       3
0       0       0

2nd matrix
1       2       3
0       4       0
0       0       8


-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

2

1st  sparse matrix
2       3       3
-------+-------+-------+
0       0       1
0       1       2
0       2       3

2nd  sparse matrix
3       3       5
-------+-------+-------+
0       0       1
0       1       2
0       2       3
1       1       4
2       2       8


-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

3

sum of both sparse matrix
2       3       5
-------+-------+-------+
0       0       2
0       1       4
0       2       6
1       1       4
2       2       8


-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

4

transpose:
3       2       3
-------+-------+-------+
0       0       1
1       0       2
2       0       3

2nd transpose:
3       3       5
-------+-------+-------+
0       0       1
1       0       2
1       1       4
2       0       3
2       2       8


-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

5

transpose:
3       2       3
-------+-------+-------+
0       0       1
1       0       2
2       0       3

2nd transpose:
3       3       5
-------+-------+-------+
0       0       1
1       0       2
1       1       4
2       0       3
2       2       8


-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
1.Accept normal Matrix
2.Convert into sparse matrix
3.Add sparse matrix
4.transpose sparse matrix
5.fast transpose sparse matrix
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
Enter choice
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-


*/
