#include<stdio.h>

void accept(int *,int ,int );
void display(int *,int,int);
void add(int *,int *,int *,int,int,int,int);
void mul(int *,int *,int *,int,int,int);
void tran(int *,int *,int,int);
void sp(int *,int,int);
void main() {
	int a[5][5],b[5][5],c[5][5],r1,c1,r2,c2,n;
	do {
		printf("enter 1 for accepting and display matrix data \nenter 2 for addition of two matrix\nenter 3 for multiplication of two matrix\nenter 4 for transpose of a matrix\nenter 5 for finding saddle point of a matrix\nenter 6 for exit\n\n");
		scanf("%d",&n);
		switch(n) {
			case 1:
				printf("enter row and col 1st matrix ");
				scanf("%d%d",&r1,&c1);
				accept(a,r1,c1);
				printf("enter row and col 2nd matrix ");
				scanf("%d%d",&r2,&c2);
				accept(b,r2,c2);
				break;
			case 2:
				add(a,b,c,r1,c1,r2,c2);
				break;

			case 3:
				mul(a,b,c,r1,c1,r2);
				break;

			case 4:
				tran(a,c,r1,c1);
				tran(b,c,r2,c2);
				break;

			case 5:	sp(a,r1,c1);
				break;
				
			case 6: break;

			default:
				printf("enter a option between 1 to 5");
		}
	} while(n!=6);

}
void accept(int *a,int r1,int c1) {
	int i,j;
	printf("enter data for  matrix:\n\n");
	for(i=0; i<r1; i++) {
		for(j=0; j<c1; j++) {
			scanf("%d",(a+i*10+j));
		}
	}
	display(a,r1,c1);
}
void display(int *d,int p,int q) {
	int i,j;
	printf(" data for matrix\n");
	for(i=0; i<p; i++) 
	{printf("\n");
		for(j=0; j<q; j++) {
			printf("%d\t",*(d+i*10+j));
		}
	}printf("\n\n\n");
}
void add(int *e,int *f,int *g,int o,int p,int s,int t) {
	int i,j;
	if(o==s&&p==t) 
	{
	for(i=0;i<o;i++)
	{for(j=0;j<p;j++){
		*(g+i*10+j)=*(e+(i*10)+j)+(*(f+i*10+j));
		}}
		printf("\naddition \n");
	  	display(g,o,p);
	} else
		printf("enter matrix of same order\n\n\n");
}
void mul(int *r,int *w,int *p,int k,int l,int u) 
{
	int i,j,k1;
 if(l==u){
     
	for(i=0;i<k;i++)
	{
	  for(j=0;j<l;j++)
	  { 
	  *(p+(i*10+j))=0;
	   for(k1=0;k1<k;k1++)
	   {
	   *(p+(i*10+j))=*(p+(i*10+j))+ *(r+(i*10+k1))*(*(w+(k1*10+j)));
	   }
	  }
	}
	     printf("\nmultiplication\n");
	display(p,k,l);}
	else
		printf("enter appropriate order for multiplication\n\n\n");
}
void tran(int *a,int *d,int x1,int y1) 
{int i,j;

  for(i=0;i<x1;i++)
   {for(j=0;j<y1;j++)
     {(*(d+j*10+i))=(*(a+i*10+j));	
		}}
		printf("\ntranspose\n");
	       display(d,j,i);
}
void sp(int *a2,int x2,int y2) {
        int i2,j2,k,max,min,pos,pos2;
	int flag=0;
	for(i2=0;i2<x2;i2++) {
		min=*(a2+i2*10+0);
		for(j2=0;j2<y2;j2++) {
			if(min>=*(a2+i2*10+j2)) {
				min=*(a2+i2*10+j2);
				pos=j2;
			}
		}max=*(a2+0*10+pos);
		for(k=0;k<x2;k++) {
			if(max<=*(a2+i2*10+pos)) {
				max=*(a2+k*10+pos);
				pos2=k;
			}
		}
		if(min==max) {
			printf("\n%d is saddle point\n\n\n",min);
			flag=1;
		}
	}
	if(flag==0)
		printf("\nsaddle point  doesn't exist\n\n\n");
}


/* OUTPUT
student@student-OptiPlex-380:~/Desktop$ gcc fds2b.c
student@student-OptiPlex-380:~/Desktop$ ./a.out
enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

1
enter row and col 1st matrix 2 2
enter data for  matrix:

1 2 3 4
 data for matrix

1	2	
3	4	


enter row and col 2nd matrix 2 2
enter data for  matrix:

4 5 6 7
 data for matrix

4	5	
6	7	


enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

2

addition 
 data for matrix

5	7	
9	11	


enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

3

multiplication
 data for matrix

16	19	
36	43	


enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

4

transpose
 data for matrix

1	3	
2	4	



transpose
 data for matrix

4	6	
5	7	


enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

5

3 is saddle point


enter 1 for accepting and display matrix data 
enter 2 for addition of two matrix
enter 3 for multiplication of two matrix
enter 4 for transpose of a matrix
enter 5 for finding saddle point of a matrix
enter 6 for exit

*/
