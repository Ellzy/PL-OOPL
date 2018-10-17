#include<conio.h>
 #include<stdio.h>
 typedef struct link
 {
 char c;
 struct link *lptr,*rptr;
 }dll;
 dll* alloc(char ch)
 {
 dll* f;
 f=(dll*)malloc(sizeof(dll));
 f->rptr=NULL;
 f->lptr=NULL;
 f->c=ch;
 return f;
 }
 dll* freeall(dll *f)
 {
 dll* temp;
 while(f!=NULL)
 {
 temp=f;
 f=f->rptr;
 f->rptr->lptr=NULL;
 free(temp);
 }
 return f;  
 }
 dll* create()
 {
  dll *f,*nw;
  char x;
  f=NULL;
  printf("\n Enter a string :");
  flushall();
  while((x=getchar())!='\n')
   {
 if(f==NULL)
 {
  nw=alloc(x);
  f=nw;
 }
 else
  {
  nw->rptr=alloc(x);
  nw->rptr->lptr=nw;
  nw=nw->rptr;
  nw->rptr=NULL;
  }
   }
  return(f);
 }
 void reverse(dll *f)
 {
 dll *p;
 p=f;
 if(p==NULL)
 {
 printf("\n Empty list");
 return;
 }
 printf("\n\nInfo\tleft ptr\taddress\t\tright ptr");
 while(p->rptr!=NULL)
 p=p->rptr;
 printf("\n%c\t%d\t\t%d\t\t%d",p->c,p->lptr,p,p->rptr);
 do
 {
 p=p->lptr;
 printf("\n%c\t%d\t\t%d\t\t%d",p->c,p->lptr,p,p->rptr);
 }while(p!=f);
 }
 //DISPLAYING THE LINKED LIST
 void display(dll *f)
 {
 dll *p;
 p=f;
 if(p==NULL)
 {
 printf("\n Empty list");
 return;
 }
 printf("\n\nInfo\tleft ptr\taddress\t\tright ptr");
 while(p!=NULL)
 {
 printf("\n%c\t%d\t\t%d\t\t%d",p->c,p->lptr,p,p->rptr);
 p=p->rptr;
 }
 }
 dll* del(dll *f,char ch)
 {
 dll *temp;
 temp=f;
 while((temp!=NULL)&&(temp->c!=ch))
 temp=temp->rptr;
 if(temp==NULL)
 {
 printf("THE CHARACTER IS NOT FOUND");
 return f;
 }
 if(temp!=f)
 temp->lptr->rptr=temp->rptr;
 else
 f=temp->rptr;
 if(temp->rptr!=NULL)
 temp->rptr->lptr=temp->lptr;
 free(temp);
 printf("THE CHARACTER HAS BEEN DELETED");
 return f;
 }
 void insert_a(dll*f,char ch)
 {
 dll *nw;
 char a;
 while((f!=NULL)&&(f->c!=ch))
 f=f->rptr;
 if(f==NULL)
 printf("VALUE NOT FOUND");
 else
 {
 printf("ENTER CHARACTER TO BE INSERTED");
 flushall();
 scanf("%c",&a);
 nw=alloc(a);
 nw->lptr=f;
 nw->rptr=f->rptr;
 f->rptr=nw;
 if(nw->rptr!=NULL)
 nw->rptr->lptr=nw;
 }
 }
 dll* insert_b(dll *f,char ch)
 {
 dll *nw,*temp;
 char a;
 temp=f;
 while((f!=NULL)&&(f->c!=ch))
 f=f->rptr;
 if(f==NULL)
 {
 printf("VALUE NOT FOUND");
 return f;
 }
 printf("ENTER CHARACTER TO BE INSERTED");
 flushall();
 scanf("%c",&a);
 nw=alloc(a);
 nw->rptr=f;
 nw->lptr=f->lptr;
 f->lptr=nw;
 if(nw->lptr!=NULL)
 nw->lptr->rptr=nw;
 else
 temp=nw;
 return temp;
 }
 void main()
 {
 dll *f;
 int ch,i;
 char c;
 do
 {
 clrscr();
 printf("\n\t\t\t\tMAIN MENU");
 printf("\n\t\t\t1.Create\n\t\t\t2.Display\n\t\t\t3.Delete a node");
 printf("\n\t\t\t4.Insert a node\n\t\t\t5.Display backwards \n\t\t\t6.Exit");
 printf("\n\nEnter your choice : ");
 flushall();
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 f=create();
 printf("THE LIST HAS BEEN CREATED");
 getch();
 break;
 case 2:
 display(f);
 getch();
 break;
 case 3:
 printf("ENTER THE CHARACTER TO BE DELETED");
 flushall();
 scanf("%c",&c);
 f=del(f,c);
 getch();
 break;
 case 4: do
 {
 clrscr();
 printf("\n\t\t\t\tINSERT\n");
 printf("\n\t\t\t1.AFTER A CHARACTER\n");
 printf("\n\t\t\t2.BEFORE A CHARACTER\n");
 printf("\n\t\t\t3.EXIT\n");
 printf("ENTER YOUR CHOICE : ");
 flushall();
 scanf("%d",&ch);
 if(ch==1||ch==2)
 {
 printf("Enter that character : ");
 flushall();
 scanf("%c",&c);
 }
 switch(ch)
 {
 case 1: insert_a(f,c);
 printf("\nThe value is inserted\n");
 getch();
 break;
 case 2: f=insert_b(f,c);
 printf("\nThe value is inserted\n");
 getch();
 break;
 case 3:
 break;
 default:
 printf("Invalid,enter again\n");
 getch();
 }
 }while(ch!=3);
 break;
 case 5:
 reverse(f);
 getch();
 break;
 case 6:
 break;
 default:
 printf("Invalid choice");
 getch();
 }
 }while(ch!=6);
 }
