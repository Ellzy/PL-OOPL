#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coe,exp;
	struct node *add;
}node;

node *create();
node *insert(node *head,int c,int e);
void display(node *head);
node *add(node *head1,node *head2);
node *mul(node *head1,node *head2);
int eval(node *head);
int power(int x,int exp);

node *create()
{
	node *head=NULL;
	int i,n,c,e;
	printf("enter no.of terms in polynomials:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter coefficient: ");
		scanf("%d",&c);
		printf("Enter exponent: ");
		scanf("%d",&e);
		head=insert(head,c,e);
	}
	return head;
}

node *insert(node *head,int c,int e)
{
	node *p,*q;
	int flag=0;
    p=(node *)malloc(sizeof(node));
    p->coe=c;
    p->exp=e;
       if(head==NULL)
       {
       	p->add=p;
       	head=p;
       	head->add=head;
       	flag=1;
		      }
	    if(flag==0)
	   if(head->exp==e)
	   {
	   	head->coe=head->coe+c;
	   }
	   if(head->exp<e)
	   {
	   p->add=head->add;
	   head->add=p;
	   head=p;
       }
       if(head->exp>e)
        {
        	q=head;
        	while(q->add->exp<=e)
        	q=q->add;
        	if(q->exp==e)
        	{
        		q->coe=q->coe+c;
        		}
        	else
			{
				p->add=q->add;
				q->add=p;
			}
		}
		return head;
	}

void display(node *head)
{
	node *p;
	  for(p=head->add;p!=head;p=p->add){
	  	printf("%dx^%d+",p->coe,p->exp);
	  }
           printf("%dx^%d\n",p->coe,p->exp);
}

node *add(node *head1,node *head2)
{
	node *p,*head=NULL;
	for(p=head1->add;p!=head1;p=p->add)
	{
		head=insert(head,p->coe,p->exp);
	}
	head=insert(head,p->coe,p->exp);

	for(p=head2->add;p!=head2;p=p->add)
	{
		head=insert(head,p->coe,p->exp);
	}
	head=insert(head,p->coe,p->exp);
return head;
}

node *mul(node *head1,node *head2)
{ 
node *head=NULL,*p,*q;
   for(q=head1->add;q!=head1;q=q->add)
          {
          	for(p=head2->add;p!=head2;p=p->add)
			  {
			  	head=insert(head,q->coe*p->coe,q->exp+p->exp);
			  }
			  head=insert(head,q->coe*p->coe,q->exp+p->exp);
		  }    
	for(p=head2->add;p!=head2;p=p->add)
			  {
			  	head=insert(head,q->coe*p->coe,q->exp+p->exp);
			  }
		     head=insert(head,q->coe*p->coe,q->exp+p->exp);
return head;
}

int eval(node *head)
{
	int x,ans=0;
	node *p;
	printf("\nEnter value of x:\t");
	scanf("%d",&x);
	p=head->add;
	do
	 {
	 	ans=ans+(p->coe*power(x,p->exp));
	 	p=p->add;
	 }while(p!=head->add);
	 return ans;
}

int power(int x,int exp)
{
	int i,result=1;
	for(i=0;i<exp;i++)
	    result=result*x;
    return result;
}

void main()
{
	int n,result,c;
	node *head1=NULL,*head2=NULL,*head=NULL;
	do{printf("\n============================\n1.create & display polynomial 1\n2.create & display polynomial 2\n3.Addition\n4.multiplication\n5.Evalution\n6.Exit\n============================\nEnter choice\n============================\n");
scanf("%d",&n);
switch(n)
{
case 1:head1=create();
       printf("\nfirst polynomial:\n\t");
	   display(head1);
	      break;   
case 2:head2=create();
       printf("\nsecond polynomial:\n\t");
	   display(head2);  
		  break;
case 3:head=add(head1,head2);
        printf("\nAddition of polynomial are:\n\t");
        display(head);
            break;
case 4:head=mul(head1,head2);
        printf("\nMultiplition of polynomial are:\n\t");
        display(head);
            break;
case 5:printf("enter no.to perform evalution on polynomial:\n1.First Polynomial\n2.Second Polynomial\nEnter choice:\t");
        scanf("%d",&c);
        if(c==1)
        {
        	result=eval(head1);
        	printf("\nResult: %d",result);
		}
		
        if(c==2)
        {
        	result=eval(head2);
        	printf("\nResult: %d",result);
		}
            break;
case 6:     break;

default:printf("\nenter a valid option\n");
	}}while(n!=6);
}



/*
OUTPUT


============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
1
enter no.of terms in polynomials:       2

Enter coefficient: 2
Enter exponent: 3

Enter coefficient: 4
Enter exponent: 2

first polynomial:
        4x^2+2x^3

============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
2
enter no.of terms in polynomials:       3

Enter coefficient: 1
Enter exponent: 4

Enter coefficient: 5
Enter exponent: 2

Enter coefficient: 6
Enter exponent: 3

second polynomial:
        5x^2+6x^3+1x^4

============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
3

Addition of polynomial are:
        9x^2+8x^3+1x^4

============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
4

Multiplition of polynomial are:
        20x^4+34x^5+16x^6+2x^7

============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
5
enter no.to perform evalution on polynomial:
1.First Polynomial
2.Second Polynomial
Enter choice:   1

Enter value of x:       2

Result: 32
============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================
5
enter no.to perform evalution on polynomial:
1.First Polynomial
2.Second Polynomial
Enter choice:   2

Enter value of x:       3

Result: 288
============================
1.create & display polynomial 1
2.create & display polynomial 2
3.Addition
4.multiplication
5.Evalution
6.Exit
============================
Enter choice
============================

*/
