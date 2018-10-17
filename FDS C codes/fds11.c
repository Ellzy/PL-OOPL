#include<stdio.h>
#include<stdlib.h>
typedef struct node {
int data;
struct node *next,*prev;
}dnode;
int n,i;
dnode *create()  {
dnode *p,*last,*head=NULL;
printf("enter no of nodes to enter:\t");
scanf("%d",&n);
for(i=0;i<n;i++)  {
p=(dnode *)malloc(sizeof(dnode));
printf("enter value : ");
scanf("%d",&(p->data));
p->next=NULL;
p->prev=NULL;
if(head==NULL)  {
head=p;
last=p;
}
else  {
last->next=p;
p->prev=last;
last=p;
}}
return head;
}

void  f_display(dnode *head)  {
dnode *p;
printf("list:\n");
for(p=head;p!=NULL;p=p->next)  {
printf("%d\n",p->data);
}}

void b_display(dnode *head)  {
dnode *p;
for(p=head;p->next!=NULL;p=p->next)
{ }
printf("list:\n");
for(;p!=NULL;p=p->prev)  {
printf("%d\n",p->data);
}}

dnode *f_insert(dnode *head)  {
dnode *p;
p=(dnode *)malloc(sizeof(dnode));
printf("\nEnter value:\t");
scanf("%d",&(p->data));
p->next=NULL;
p->prev=NULL;
p->next=head;
head->prev=p;
head=p;
return head;
}

dnode *l_insert(dnode *head)  {
dnode *p,*q;
p=(dnode *)malloc(sizeof(dnode));
printf("\nEnter value:\t");
scanf("%d",&(p->data));
p->next=NULL;
p->prev=NULL;
for(q=head;q->next!=NULL;q=q->next)
{}
q->next=p;
p->prev=q;
return head;
}

dnode *b_insert(dnode *head)   {
int pos;
dnode *p,*q;
p=(dnode *)malloc(sizeof(dnode));
printf("\nEnter value:\t");
scanf("%d",&(p->data));
p->next=NULL;
p->prev=NULL;
printf("\nEnter position for inserting node:\t");
scanf("%d",&pos);
q=head;
for(i=1;i<pos-1;i++)   {
q=q->next;
}
p->next=q->next;
p->prev=q;
q->next=p;
return head;
}

dnode *f_del(dnode *head) {
dnode *p;
p=head;
head=head->next;
head->prev=NULL;	
free(p);
return head;
}

dnode *l_del(dnode *head)  {
dnode *p,*q;
for(q=head;q->next!=NULL;q=q->next)
{}
p=q;
q=q->prev;
q->next=NULL;
free(p);
return head;
}

dnode *b_del(dnode *head)  {
dnode *p,*q;
int pos;
printf("\nenter position:\t");
scanf("%d",&pos);
q=head;
for(i=1;i!=pos;i++)  {
q=q->next;
}
p=q;
q=q->prev;
q->next=p->next;
free(p);
return head;
}

int search(dnode *head)   {
dnode *p,*q;
int n,flag=0;
n=1;
p=(dnode *)malloc(sizeof(dnode));
printf("\nenter new node to search:\t");
scanf("%d",&(p->data));
for(q=head;q->next!=NULL;q=q->next,n++)  {
if((p->data)==(q->data))
{
flag=1;
break;
}}
if(flag==1)  {
printf("\nThe data is present at %d position\n",n);
}
else  {
printf("\nthe data not found !\n");
}}

void modify(dnode *head){
dnode *p,*q;
int i=1,flag=0,j;
p=(dnode *)malloc(sizeof(dnode));
printf("enter the data to be modified\n");
scanf("%d",&(p->data));
for(q=head;q!=NULL;q=q->next,i++)  {
if((q->data)==(p->data))  {
flag=1;
break;
}}
p=head;
if(flag=1)  {
for(j=1;j<i;j++)   {
p=p->next;	
}
printf("enter the new data\n");
scanf("%d",&(p->data));
}
else  {
printf("the data is not found\n");
}}

void main()  {
int ch;
dnode *head;
do{
printf("\n============================\n1.create Doubly Linked List\n2.display forward\n3.display backward\n4.Insert at Front\n5.Insert at End\n6.Insert in Between\n7.delete at front\n8.delete at end\n9.delete in between\n10.search\n11.modify\n============================\nEnter choice\n============================\n");
scanf("%d",&ch);
switch(ch)  {
case 1:head=create();
       break;
case 2:f_display(head);
       break;
case 3:b_display(head);
       break;
case 4:head=f_insert(head);
       f_display(head);
       break;
case 5:head=l_insert(head);
       f_display(head);
       break;
case 6:head=b_insert(head);
       f_display(head);
       break;
case 7:head=f_del(head);
       f_display(head);
       break;
case 8:head=l_del(head);
       f_display(head);
	   break;
case 9:head=b_del(head);
       f_display(head);
	   break;
case 10:search(head);
        break;  
case 11:modify(head);
        f_display(head);
        break;      
default:printf("\nenter valid option\n");
}}while(ch!=0);
}



/*
OUTPUT


============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
1
enter no of nodes to enter:     4
enter value : 1
enter value : 2
enter value : 3
enter value : 4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
2
list:
1
2
3
4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
3
list:
4
3
2
1

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
4

Enter value:    0
list:
0
1
2
3
4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
5

Enter value:    5
list:
0
1
2
3
4
5

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
6

Enter value:    3

Enter position for inserting node:      3
list:
0
1
3
2
3
4
5

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
7
list:
1
3
2
3
4
5

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
8
list:
1
3
2
3
4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
9

enter position: 2
list:
1
2
3
4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
10

enter new node to search:       3

The data is present at 3 position

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================
11
enter the data to be modified
3
enter the new data
6
list:
1
2
6
4

============================
1.create Doubly Linked List
2.display forward
3.display backward
4.Insert at Front
5.Insert at End
6.Insert in Between
7.delete at front
8.delete at end
9.delete in between
10.search
11.modify
============================
Enter choice
============================

*/
