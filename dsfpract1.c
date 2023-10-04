#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head;
void createlist(int n);
void insertatbeginning(int data);
void displaylist();

int main(){
    int n;
    printf("enter number of elements");
    scanf("%d",&n);

    createlist(n);
    printf("data in list is");
    displaylist();
    int a;

    printf
}