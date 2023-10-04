#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*front;
struct node*rear;
void enqueue(int x){
    struct node*newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=0;

if(front==0 && rear==0){
    front=rear=newNode;
}
else{
    rear->next=newNode;
    rear=newNode;
   }
}
void display(){
    struct node*temp;
    if(front==0 && rear==0){
        printf("list is empty");
    }
    else{
        temp=front;
        while(temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue(){
    struct node*temp;
    temp=front;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
        front=front->next;
        free(temp);
    }
}
void peek(){
    if(front==0 && rear==0){
        printf("Queue is empty");
    }else{
        printf("%d",front->data);
    }
}
void main(){
    enqueue(5);
    enqueue(9);
    enqueue(7);
    display();
    dequeue();
    peek();
}

