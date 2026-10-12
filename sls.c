#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *top=NULL;

void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the element to insert: ");
scanf("%d",&newnode->data);
if(top==NULL)
{
top=newnode;
}
else
{
newnode->link=top;
top=newnode;
}
printf("\n%d INSERTED SUCCESSFULLY",newnode->data);
}

void pop()
{
struct node *temp=top;
if(top==NULL){
printf("\nSTACK UNDERFLOW\n");
return;
}
printf("\n%d is popped",temp->data);
top=temp->link;
free(temp);
}

void peek()
{
struct node *temp=top;
if(top==NULL)
{
printf("\nSTACK UNDERFLOW");
return;
}
printf("Top Element is %d",temp->data);
}

void display()
{
struct node *temp=top;
if(top==NULL)
{
printf("\nNO ELEMENTS");
return;
}
printf("\nELEMENTS IN STACK ARE: \n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}

void search()
{
struct node *temp=top;
int key,found=0;
if(top==NULL)
{
printf("\nSTACK UNDERFLOW\n");
return;
}
printf("\nENTER THE ELEMENT TO SEARCH:\n");
scanf("%d",&key);
while(temp!=NULL)
{
if(temp->data==key)
{
printf("\n%d ELEMENT FOUNDED\n",temp->data);
found=1;
}
temp=temp->link;
}
if(!found)
{
printf("\nELEMENT NOT FOUND");
}
}

void main()
{
int choice;
do{
printf("\n*****STACK*****\n");
printf("\n1.push()\n2.pop()\n3.peek()\n4.display()\n5.search\n6.exit\n");
printf("\nEnter the choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:push();break;
case 2:pop();break;
case 3:peek();break;
case 4:display();break;
case 5:search();break;
case 6:printf("\nExit\n");break;
default:printf("Enter a valid choice");
}
}while(choice!=6);
}
