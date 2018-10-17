#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next; 
}node;

int i,n;

node *create(int n)
{
node *head =NULL;
node *p,*last;

for(i=0;i<n;i++)
{
p=(node *)malloc(sizeof(node));
printf("\n\nenter the value:\t");
scanf("%d",&p->data);
p->next=NULL;	
if(head==NULL)
{
head=p;
last=p;
}
else
{
last->next=p;
last=p;
}
}
return head;
}

void display(node *head)
{
node *p;
printf("\nList:\n");
for(p=head;p!=NULL;p=p->next)
{
printf("%d\n",p->data);
}
}

node *f_insert(node *head)
{
	node *q;
	q=(node *)malloc(sizeof(node));
	printf("insert a node at Front:\t");
	scanf("%d",&(q->data));
	q->next=NULL;
	q->next=head;
	head=q;
return head;
}

node *l_insert(node *head)
{
	node *q,*p;
	q=(node *)malloc(sizeof(node));
	printf("insert a node at End:\t");
	scanf("%d",&(q->data));
	for(p=head;p->next!=NULL;p=p->next)
	{
	}
	q->next=NULL;
	p->next=q;
	return head;
}

node *b_insert(node *head)
{
	int pos;
	node *p,*q;
	p=(node *)malloc(sizeof(node));
	printf("\nenter value:\t");
	scanf("%d",&(p->data));
	p->next=NULL;
	printf("\nenter pos:\t");
	scanf("%d",&pos);
	q=head;
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	p->next=q->next;
	q->next=p;
return head;
}

node *f_del(node *head)
{
	node *p;
	p=head;
	head=head->next;
	p=NULL;
	free(p);
	return head;
}

void l_del(node *head)
{
	node *p,*q;
	for(p=head;p->next->next!=NULL;p=p->next)
	{
	}
	q=p->next;
	p->next=NULL;
	free(q);
}

node *b_del(node *head)
{
    node *p,*q;
    int pos;
    printf("enter position of node to delete:\t");
    scanf("%d",&pos);
    p=head;
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
	q=p;
	p=p->next;
	q->next=p->next;
	free(p);
	return head;	
}

node *rev(node *head)
{
node *p,*q,*r;
p=NULL;
q=head;
r=q->next;
while(q!=NULL)
{
q->next=p;
p=q;
q=r;
if(q!=NULL)
{
r=r->next;
}
}
return p;
}

 
void main()
{
int ch;
node *head;
do{
printf("\n===============\n1.Create List\n2.Insert in Front\n3.Insert in End\n4.Insert in between\n5.Delete in front\n6.Delete in end\n7.Delete in between\n8.Reverse\n9.Exit\n===============\nenter choice\n===============\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter no of nodes:\t");
		scanf("%d",&n);
			head=create(n);
           display(head);
           break;
case 2:head=f_insert(head);
       display(head);
       break;
case 3:head=l_insert(head);
        display(head);
		break;           
case 4:head=b_insert(head);
        display(head);
		break;
case 5:head=f_del(head);
        display(head);
		break;
case 6:l_del(head);
       display(head);
	   break;			
case 7:head=b_del(head);
       display(head);
       break;
case 8:head=rev(head);
           display(head);
           break;       
case 9:break;    
default:printf("\nenter valid option\n");
}
}while(ch!=9);
}



/*
OUTPUT


===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
1
enter no of nodes:      4


enter the value:        1


enter the value:        2


enter the value:        3


enter the value:        4

List:
1
2
3
4

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
2
insert a node at Front: 0

List:
0
1
2
3
4

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
3
insert a node at End:   5

List:
0
1
2
3
4
5

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
4

enter value:    3

enter pos:      3

List:
0
1
3
2
3
4
5

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
5

List:
1
3
2
3
4
5

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
6

List:
1
3
2
3
4

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
7
enter position of node to delete:       2

List:
1
2
3
4

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============
8

List:
4
3
2
1

===============
1.Create List
2.Insert in Front
3.Insert in End
4.Insert in between
5.Delete in front
6.Delete in end
7.Delete in between
8.Reverse
9.Exit
===============
enter choice
===============


*/

