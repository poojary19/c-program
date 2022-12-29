
#include<stdio.h>
#include<stdlib.h>
struct node
{
char ssn[10],name[10],dept[15],desig[10],phno[15];
int sal;
struct node*llink;
struct node*rlink;
};
typedef struct node*NODE;
NODE temp,FIRST=NULL,END=NULL;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;
}
void read()
{
temp=getnode();
temp->llink=NULL;
temp->rlink=NULL;
printf("enter ssn:");
scanf("%s",temp->ssn);
printf("enter name:");
scanf("%s",temp->name);
printf("enter dept:");
scanf("%s",temp->dept);
printf("enter designation:");
scanf("%s",temp->desig);
printf("enter phno");
scanf("%s",temp->phno);
printf("enter salary:");
scanf("%d",&temp->sal);
}
void create_DLL()
{
int n,i=1;
printf("enter the number of employees\n");
scanf("%d",&n);
while(i<=n)
{
printf("enter the details of the %d employee\n",i++);
read();
if(FIRST==NULL)
{
FIRST=temp;
END=temp;
}
else
{
END->rlink=temp;
temp->llink=END;
END=temp;
}
}
}
void display_count()
{
temp=FIRST;
int count=1;
printf("employee details:\n");
if(FIRST==NULL)
{
printf("the employee detailo is null and count is %d\n",count-1);
}
else
{
while(temp!=END)
{
count++;
printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
temp=temp->rlink;
}
printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
printf("student count is %d\n",count);
}
return;
}
void insertionfront()
{
printf("enter the details of the employee\n");
read();
if(FIRST==NULL)
FIRST=temp;
else
{
temp->rlink=FIRST;
FIRST->llink=temp;
FIRST=temp;
}
}
void insertionend()
{
printf("enter the details of the new employee\n");
read();
if(FIRST==NULL)
{
FIRST=temp;
END=temp;
}
else
{
END->rlink=temp;
temp->llink=END;
END=temp;
}
return;
}
void deletionfront()
{
temp=FIRST;
if(FIRST==NULL)
{
printf("list is empty\n");
}
else if(FIRST==END)
{
printf("deleted element is %s\n",temp->ssn);
FIRST=NULL;
END=NULL;
free(temp);
}
else
{
printf("deleted element is %s\n",temp->ssn);
FIRST=FIRST->rlink;
FIRST->llink=NULL;
free(temp);
}
return;
}
void deletionend()
{
temp=END;
if(FIRST==NULL)
{
printf("list is empty\n");
}
else if(FIRST==END)
{
printf("deleted element is %s\n",temp->ssn);
FIRST=NULL;
END=NULL;
free(temp);
}
else
{
printf("deleted element is %s\n",temp->ssn);
END=END->llink;
END->rlink=NULL;
free(temp);
}
return;
}
void main()
{
int choice;
while(1)
{
printf("-------------MENU---------\n");
printf("\1-create dll of n employee");
printf("\n2-display sll");
printf("\n3-insertion at front");
printf("\n4-insertion at end");
printf("\n5-deletion at front");
printf("\n6-delection at end");
printf("\n7-exit\n");
printf("-----------------\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:create_DLL();
break;
case 2:display_count();
break;
case 3:insertionfront();
break;
case 4:insertionend();
break;
case 5:deletionfront();
break;
case 6:deletionend();
break;
case 7:return;
default:printf("invalid choice\n");
}
}
}
