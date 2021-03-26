#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert()
{
struct node *temp;
int val;
temp=(struct node *)malloc(sizeof (struct node));
if(temp==NULL)
{
printf("Queue over flow\n");
}
else
{
printf("enter the value\n");
scanf("%d",&val);
temp->data=val;
temp->next=NULL;
if(front==NULL)
{
front=rear=temp;
}
else
{
rear->next=temp;
rear=temp;
}
printf("\none value inserted in to the queue\n");
}
}
void delete()
{
struct node *temp;
if(front==NULL)
{
printf("queue underflow\n");
}
else
{
temp=front;
front=front->next;
printf("the value %d deleted from the queue",temp->data);
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==NULL)
{
printf("queue is empty\n");
}
else
{
printf("\n queue elements are:");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
int main()
{
int ch;
int e=1;
printf("queue using linkedlist");
while(e)
{
printf("\n1:insert\n2:delet\n3:display\n4:exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
       break;
case 2:delete();
       break;
case 3:display();
       break;
case 4:e=0;
       printf("\n exiting");
default:printf("\nenter valid choice\n");
}
}
return 0;
}

