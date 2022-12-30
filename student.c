
#include<stdio.h>
#include<stdlib.h>
struct node
{
char usn[20],name[20],branch[5],phno[12];
int sem;
struct node*link;
};
typedef struct node*NODE;
NODE temp,FIRST=NULL;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;
}
void read()
{
temp = getnode();
temp->link=NULL;
printf("enter usn:");
scanf("%s",temp->usn);
printf("enter name:");
scanf("%s",temp->name);
printf("enter branch:");
scanf("%s",temp->branch);
printf("enter phno:");
scanf("%s",temp->phno);
printf("enter sem:");
scanf("%d",&temp->sem);
}
void create_SLL()
{
int n,i=1;
printf("enter the number of students:\n");
scanf("%d",&n);
while(i<=n)
{
printf("\n enter he details of the %d student\n",i++);
read();
if(FIRST == NULL)
FIRST=temp;
}
}

void display_count(NODE FIRST)
{
temp=FIRST;
int count = 1;
printf("student details:\n");
if(FIRST == NULL)
{
printf("student detail is null and count is%d\n",count-1);
}
else
{
while(temp->link!=NULL)
{
count++;
printf("%s\t%s\t%s\t%s\t%d\n",temp->usn,temp->name,temp->branch,temp->phno,temp->sem);
temp = temp->link;
}
printf("%s\t%s\t%s\t%s\t%d",temp->usn,temp->name,temp->branch,temp->phno,temp->sem);
printf("\n student count:%d\n",count);
}
return;
}
void insertionfront()
{
printf("enter the details of the student \n");
read();
if(FIRST==NULL)
FIRST=temp;
else
{
temp->link=FIRST;
FIRST=temp;
}
}
NODE insertionend(NODE FIRST)
{
NODE last=FIRST;
printf("enter the details of new student\n");
read();
if(last!=NULL)
{
while(last->link!=NULL)
{
last=last->link;
}
last->link=temp;
}
else
{
FIRST=temp;
}
return FIRST;
}
void deletionfront()
{
temp=FIRST;
if(FIRST == NULL)
{
printf("list is empty\n");
}
else
{
printf("deleted element is%s\n",temp->usn);
FIRST=temp->link;
free(temp);
}
return;
}
void deletionend()
{
NODE pre=NULL;
temp = FIRST;
if(FIRST ==NULL)
{
printf("list is empty\n");
}
else if(temp->link==NULL)
{
printf("deleted element is %s\n",temp->usn);
free(temp);
FIRST=NULL;
}
else
{
while(temp->link!=NULL)
{
pre=temp;
temp=temp->link;
}
pre->link=NULL;
printf("deleted element is %s\n",temp->usn);
free(temp);
}
return;
}
void main()
{
int choice;
while(1)
{ printf("-------------------MENU------------------\n");
printf("1-create a SLL of n students\n");
printf("2-display sll\n");
printf("3-insertion at front\n");
printf("4-insertion at end\n");
printf("5-deletion at front\n");
printf("6-deletion at end\n");
printf("7-exit\n");
printf("---------------\n");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:create_SLL();
break;
case 2:display_count(FIRST);
break;
case 3:insertionfront();
break;
case 4:FIRST=insertionend(FIRST);
break;
case 5:deletionfront();
break;
case 6:deletionend();
break;
case 7:return;
default:printf("\n invalid choice\n");
}
}
}




