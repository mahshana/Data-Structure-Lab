#include<stdio.h>
void insert(int a[],int *front,int *rear)
{
int e;
printf("\n enter the number");
scanf("%d",&e);
if((*front==-1)&&(*rear==-1))
{
*front=*rear=0;
}
else
{
*rear+=1;
}
a[*rear]=e;
printf("\n enterd element %d is inserted into the queue",e);
}
void delete(int a[],int *front,int *rear)
{
if(*front==*rear)
{
printf("Queue is empty\n");
}
else
{
int e;
e=a[*front];
printf("\n element %d is deletd",e);
*front+=1;
}
}
void display(int a[],int *front,int *rear)
{
int i;
printf("the queue elements are\n:");
for(i=*front;i<=*rear;i++)
printf("%d,",a[i]);
}
int main()
{
int arr[10];
int front,rear;
int ch,e=1;
front=rear=-1;
while(e)
{
printf("\n1:insert\n2:delet\n3:display\n4:exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(arr,&front,&rear);
       break;
case 2:delete(arr,&front,&rear);
       break;
case 3:display(arr,&front,&rear);
       break;
case 4:e=0;
       printf("\n exiting");
default:printf("\nenter valid choice\n");
}
}
return 0;
}


