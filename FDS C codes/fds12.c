#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int tag;
struct node *next;
union shared
{
int data;
struct node *down;
}d;
}node;
node *create(node *head1);
node *createnode()
{
node *new1,*head,*head1,*temp;
int j,m,tag;
printf("\nenter type of node\n1.atomic\n2.linked list\nenter choice\n");
scanf("%d",&tag);
if(tag==1)
{
new1=(node *)malloc(sizeof(node));
printf("\nenter data\n");
new1->tag=tag;
scanf("%d",&new1->d.data);
new1->next=NULL;
return new1;
}
else if (tag==2)
{
head=NULL;
head1=(node *)malloc(sizeof(node));
head1->tag=tag;
head1->d.down=NULL;
head1->next=NULL;
head=create(head);
head1->d.down=head;
return head1;
}
}
node *create(node *head1)
{
node *new1,*temp;
int i,n,t;
printf("how many nodes you want to enter :  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
new1=createnode();
if(head1==NULL)
{
head1=new1;
temp=new1;
}
else
{
temp->next=new1;
temp=temp->next;
}
}
return head1;
}

void display(node *head)
{
node *temp=head,*temp1;
printf("(");
while(temp!=NULL)
{
if(temp->tag==2)
{
temp1=temp->d.down;
display(temp1);
temp=temp->next;
}
else
{
printf("%d",temp->d.data);
printf(",");
temp=temp->next;
}

}
printf("\b)");
}

void main()
{
node *head=NULL;
printf("\nGENERALIZED LINKED LIST\n\n");
head=create(head);
display(head);
printf("\b");
}




/*
OUTPUT

GENERALIZED LINKED LIST

how many nodes you want to enter :  2

enter type of node
1.atomic
2.linked list
enter choice
1

enter data
2

enter type of node
1.atomic
2.linked list
enter choice
2
how many nodes you want to enter :  2

enter type of node
1.atomic
2.linked list
enter choice
1

enter data
2

enter type of node
1.atomic
2.linked list
enter choice
1

enter data
4
(2,(2,4))

*/
