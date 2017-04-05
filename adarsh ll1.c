#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL;
struct node *newnode,*currentnode;

void getnode()
{

	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
}
void insertend()
{
//struct node *currentnode;
getnode();	
if(head==NULL)
{
	head=newnode;
	currentnode=newnode;
}
else
	{
	currentnode->link=newnode
	currentnode=newnode;
	}
}
void display()
{
currentnode=head;
	if(currentnode==NULL)
	{
	printf("\nlist is empty");
	}
	else
	{
		while(currentnode!=NULL)
		{
		printf("%d ",currentnode->data);
		currentnode=currentnode->link;
		}
	}
}

void insertfrnt()
{
	getnode();
if(newnode==NULL)
	{
	printf("\nmemory underflow:no insertion");
	}	
else if(head==NULL)
{
	head=newnode;
	currentnode=newnode;
}
else
{
	newnode->link=head;
	head=newnode;
}
}
void insertany()
{
int a;
getnode();
	printf("\nenter the key");
	scanf("%d",&a);
if (newnode==NULL)
{
	printf("\nmemory underflow:no insertion");
}
else if(head==NULL)
{
	printf("list is empty");
	free(newnode);
}
else
{
	currentnode=head;
	while((currentnode->data!=a)&&(currentnode->link!=NULL))
	{
		currentnode=currentnode->link;
	}
	if(currentnode->data==a)
	{
		newnode->link=currentnode->link;
		currentnode->link=newnode;
	}
	else
	{
		printf("\nkey not found");
		free(newnode);
	}
}
}
void main()
{
	int b;
	system("clear");
while(1)
{
	printf("\t\t\t\tMENU");
	printf("\n1.insert front\n2.insert end\n3.insert any\n4.display\n5.exit");
	printf("\nenter your choice");
	scanf("%d",&b);
	
	
	switch(b)
	{
		case 1:insertfrnt();
			system("clear");
			break;
		case 2:insertend();
			system("clear");
			break;
		case 3:insertany();
			system("clear");
			break;
		case 4:display();
			break;
		case 5:exit(0);
		default:
		printf("\ninvalid entry");
		break;	
	}

}
}

	


