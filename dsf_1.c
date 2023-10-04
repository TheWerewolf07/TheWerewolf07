#include<stdio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node*link;
}*top=NULL;

int isEmpty(){
    if(top==NULL){
        return 1;
    else
        return 0;
    }
}

void push(int data){
    struct node*newnode;
    newnode=malloc(sizeof(newnode));
    if(newnode=NULL){
        printf("Stack overflow");
        exit(1);
    }
    newnode->data=data;
    newnode->link=NULL;
    newnode->link=top;
    top=newnode;
}
int pop(){
    struct node*temp;
    int val;
    if(isempty()){
        printf("Stack Underflow");
        exit(1);
    }
    temp=top;
    val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return val;
}
int peek(){
    if(isempty()){
        printf("Stack Underflow");
        exit(1);
    }
    return top->data;
}
void print(){
    struct node*temp;
    temp=top;
    printf("Stack elements are: ");
    while(1){
        printf("%d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main(){
     int choice,data;
       while(1){
    printf("\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Print the top element");
    printf("4.Print all the elements of stack");
    printf("5.Quit\n");
    printf("Please enter your choice:");
    scanf("%d",&choice);
    }
switch(choice){
    case1:
        printf("enter the element to be pushed:");
        scanf("%d",&data);
        push(data);
        break;
    case2:
        data=pop();
        prinf("deleted element is %d\n",data);
        break;
    case3:
        printf("The topmost element of the stack is %d\n",peek());
        break;
    case4:
        print();
        exit(1);
    case5:
        exit(1);
    default:
        printf("Wrong choice\n");
    }
}

