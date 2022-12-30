
Conversation opened. 1 read message.

Skip to content
Using Gmail with screen readers
Enable desktop notifications for Gmail.
   OK  No thanks
1 of 266
(no subject)
Inbox

Lekha Poojary <lekhapoojary702@gmail.com>
Attachments
3:35 PM (22 minutes ago)
to me



#include<stdio.h>
#include<math.h>
void tower(int n,int source,int temp,int destination)
{
if(n == 0)
return;
tower(n-1,source,destination,temp);
printf("\nmove disc %d from %c to %c",n,source,destination);
tower(n-1,temp,source,destination);
}
void main()
{
int n;

printf("\nenter the number of discs:\n");
scanf("%d",&n);
tower(n,'A','B','C');
printf("\n\n total number of moves are: %d",(int)pow(2,n)-1);
}
