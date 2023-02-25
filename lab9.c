#include<stdio.h>
#include<math.h>
#define MAX 20
int a[20][20],s[20],n,i,j,v,visited[20],reach[10],top=-1,count=0;
void reachability(int U)
{
    for( i=1;i<=n;i++)
    if(a[v][i]&&!visited[i])
    s[++top]=i;
    if(top>=0){
        visited[s[top]]=1;
        reachability(s[top--]);
    }
}
void connectivity(int v){
    int i;
    reach[v]=1;
    for(i=1;i<=n;i++){
    if(a[v][i]&&!reach[i]){
    printf("\n%d->%d",v,i);
    count++;
    connectivity(i);
    }
    }
}
void main(){
    int v,choice;
    printf("enter the no of cities");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s[i]=0;
        visited[i]=0;
        reach[i]=0;
    }
    printf("\n enter data of matrix graph\n");
    for(i=1;i<=n;i++)
    for(i=1;i<=n;i++)
    scanf("%d",&a[i][j]);
    while(1){
        printf("\n1.test for reachability");
        printf("\n2.test for connectivity");
        printf("\n3.exit");
    
printf("enter your choice");
scanf("%d",&choice);
switch(choice){
    case 1:printf("enter the valid vertex");
    scanf("%d",&v);
    if((v<1)||(v>n)){
    printf("enter the valid vertex");
    }
    else{
    for(i=1;i<=n;i++){
        s[i]=0;
        visited[i]=0;
        reach[i]=0;
    }
    visited[v]=1;
    reachability(v);
printf("enter the nodes with are reachable %d:\n",v);
for(i=1;i<=n;i++)
if(visited[i]&&!=v)
printf(" node %d\n",i);
}
break;

case 2:
for(i=1;i<=n;i++)
reach[i]=0;
connectivity(1);
if(count==n-1)
printf("graph is found");
else
printf("graph not found");
break;
case 3:return;
default:printf("enter proper choice");
    }
}
}

