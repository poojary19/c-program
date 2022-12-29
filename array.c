

#include<stdio.h>
int array[100],i,n;
void create()
{
printf("enter the  number of elements in array : ");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
}
void display()
{
printf("elements of the array are\n");
for(i=0;i<n;i++)
printf("element %d at %d position \n",array[i],i);
}
int main()
{
int ch;
while(1)
{
printf("\n 1.Creating an Array of N Integer Element");
printf("\n 2.Display the Array Element");
printf("\n 3.Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create ();
break;
case 2:display ();
break;
case 3:return 0;
default:printf("\n Invalid choice\n");
}
}
return 0;
}





