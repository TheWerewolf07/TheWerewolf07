#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *link;
}*top=NULL;

int isempty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}


void push (int data)
{
	struct node * newnode;
	newnode=malloc(sizeof(newnode)); //malloc return null means stack is full
	if(newnode==NULL)
	{
		printf("\nstack overflow");
		exit(1);
	}
newnode->data=data;
newnode->link=NULL;

newnode->link=top;
top=newnode;
}

int pop()
{
	struct node *temp;
	int val;
	if(isempty())
	{
		printf("\nstack underflow");
		exit(1);
	}
	temp=top;
	val=temp->data;
	top=top->link;
	free(temp);
	temp=NULL;
	return val;
	
}

int peak()
{
	if (isempty()){
		printf("stack underflow");
		exit(1);
	}
	return top->data;
}

void print()
{
	struct node *temp;
	temp=top;
	printf("\nthe elements of stack are:\n");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
			printf("\n");
	}

}

int main()
{
	int choice,data;
	while(1)
	{
		printf("1.push\n2.pop\n4.print top element\n3.print\n5.quit\n");
		printf("\nenter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nenter the enlment to be pushed");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				data=pop();
				printf("\npoped element is %d\n",data);
				break;
			case 3:
				printf("the top most element is %d\n",peak());
				break;	
			case 4:
				print();
				break;
			case 5:
				exit(1);
			default:
				printf("\nwrong choice");
				break;
			
		}
	}
	return 0;
}







