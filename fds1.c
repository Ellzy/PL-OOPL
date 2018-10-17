#include<stdio.h>
void accept(int [20],int);
void display(int [20],int);
void union1(int[20],int[20],int,int);
void inter(int[20],int[20],int,int);
void diff(int[20],int[20],int,int);
void sdiff(int[20],int[20],int,int);
void main()
{ int a[20],b[20],c,d;
  int n;
 do{
   printf("\n\nenter 1 for accepting and displaying set\nenter 2 for union\nenter 3 for intersection\nenter 4 for difference\nenter 5 for symetrical difference\nenter 6 for exit\n\n");
   scanf("%d",&n);
 switch(n){
     case 1:printf("\nenter size of set:\t");
            scanf("%d",&c);
            accept(a,c);
            printf("\nenter size of 2nd set:\t");
            scanf("%d",&d);
            accept(b,d);break;
     case 2: printf("union of both sets:");
	         union1(a,b,c,d);break;

	 case 3: printf("intersection of both sets:");
	         inter(a,b,c,d);break;

     case 4: printf("difference of both sets:");
	         diff(a,b,c,d);break;

     case 5: printf("symmetrical difference of both sets:");
	         sdiff(a,b,c,d);break;

     case 6:break;

     default: printf("enter a valid option\n");
         }
 }while(n!=6);
}
void accept(int a1[20],int c1)
    {int i;
	 printf("\nenter data of set\t");
       for(i=0;i<c1;i++)
      {
       scanf("%d",&a1[i]);
      }
      display(a1,c1);
    }

void display(int b1[20],int d1)
      {int j;
        for(j=0;j<d1;j++)
       {
        printf("\t%d",b1[j]);
       }
      }

void inter(int x[20],int y[20],int p,int q)
      { int i,j,k=0,c[20];
        for(i=0;i<p;i++)
          {for(j=0;j<q;j++)
            {if(x[i]==y[j])
              {c[k]=x[i];
                k++;
                   }
            }
          }
         display(c,k);
      }

void diff(int x[20],int y[20],int p,int q)
         {int i,j,k=0,c[20];
           for(i=0;i<p;i++)
             {for(j=0;j<q;j++)
               {if(x[i]==y[j])
                 {break;
                         }
               }
              if(j==q)
               {c[k]=x[i];
                 k++;
               }
              }
           display(c,k);
         }

void union1(int x1[20],int y1[20],int p1,int q1)
          {diff(x1,y1,p1,q1);
           diff(y1,x1,q1,p1);
            inter(x1,y1,p1,q1);
           }

void sdiff(int x2[20],int y2[20],int p2,int q2)
           { diff(x2,y2,p2,q2);
             diff(y2,x2,q2,p2);
           }

/* OUTPUT

 dsa@dsa-OptiPlex-380:~/Desktop$ gcc fds1.c
dsa@dsa-OptiPlex-380:~/Desktop$ ./a.out


enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit

1

enter size of set:	4

enter data of set	1 2 3 4

	1	2	3	4


enter size of 2nd set:	5

enter data of set	2 3 5 6 7

	2	3	5	6	7

enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit

2

union of both sets: 	1	4	5	6	7	2	3

enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit

3

intersection of both sets:	2	3

enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit

4

difference of both sets:	1	4

enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit

5

symmetrical difference of both sets:	1	4	5	6	7

enter 1 for accepting and displaying set
enter 2 for union
enter 3 for intersection
enter 4 for difference
enter 5 for symetrical difference
enter 6 for exit
*/
