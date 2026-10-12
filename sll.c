#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node *head=NULL;

void insertFirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));

if(newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the value to insert to front\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
newnode->link=head;
head=newnode;
}
printf("\nElement inserted %d\n",newnode->data);
}

void insertLast()
{
struct node*temp=head, *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the element to insert last\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
printf("\nElement inserted successfully %d\n",newnode->data);
}

void insertLocation()
{
int key;
struct node *temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
if(head==NULL)
{
printf("\nList empty\n");
return;
}
printf("\nEnter the key where after you want to add element\n");
scanf("%d",&key);
while(temp!=NULL&&temp->data!=key)
{
temp=temp->link;
}
if(temp==NULL)
{
printf("\nValue not exist\n");
return;
}
printf("\nEnter the element to insert\n");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link=newnode;
printf("\nValue inserted successfully %d\n",newnode->data);
}

void deleteFirst()
{
struct node*temp=head;
if(head==NULL)
{
printf("\nList Empty\n");
return;
}
head=temp->link;
printf("\nValue deleted %d\n",temp->data);
free(temp);
}

void deleteLast()
{
struct node *temp=head, *prev=NULL;
if(head==NULL)
{
printf("\nEmpty list");
return;
}
if(temp->link==NULL)
{
printf("\nValue %d deleted\n",temp->data);
head=NULL;
free(temp);
return;
}
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
printf("\nValue %d deleted\n",temp->data);
prev->link=NULL;
free(temp);
}

void deleteLocation()
{
int key;
struct node *temp=head, *prev=NULL;
if(head==NULL)
{
printf("\nEmpty list\n");
return;
}
printf("\nEnter the key that you want to delete\n");
scanf("%d",&key);
if(temp->data==key)
{
head=temp->link;
printf("\nValue %d is deleted \n",temp->data);
free(temp);
return;
}
while(temp!=NULL&&temp->data!=key)
{
prev=temp;
temp=temp->link;
}
if(temp==NULL)
{
printf("\nValue not exist\n");
return;
}
prev->link=temp->link;
printf("\nValue %d is deleted\n",temp->data);
free(temp);
}

void search()
{
struct node *temp=head;
int pos=0,found=0,val;
if(head==NULL)
{
printf("\nEmpty list\n");
return;
}
printf("\nEnter the value to search\n");
scanf("%d",&val);
while(temp!=NULL)
{
if(temp->data==val)
{
printf("\n%d value found at location %d\n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if(!found)
{
printf("\nValue %d not exist\n",val);
}
}

void display()
{
struct node *temp=head;
if(temp==NULL)
{
printf("\nList empty\n");
return;
}
printf("\nElements in the list\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}

void main()
{
int choice;
printf("\nSINGLY LINKED LIST\n");
do{
printf("\n\n1->insertFirst\n2->insertLast\n3->insertLocation\n4->deleteFirst\n5->deleteLast\n6->deleteLocation\n7->search\n8->display\n9->exit\n");
printf("\nEnter choice:\n");
scanf("%d",&choice);

switch(choice)
{
case 1:insertFirst();break;
case 2:insertLast();break;
case 3:insertLocation();break;
case 4:deleteFirst();break;
case 5:deleteLast();break;
case 6:deleteLocation();break;
case 7:search();break;
case 8:display();break;
case 9:printf("\nExit\n");exit(0);
default:printf("\nINVALID CHOICE\n");
}
}while(choice!=9);
}








