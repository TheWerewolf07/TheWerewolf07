#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
  int data;
  struct node *next;
};
struct node *top;

int main()
{
  int choice = 0;
  printf("\n*********Stack operations using linked list*********\n");

  do
  {
    printf("\n\nChose one from the below options...\n");
    printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
    printf("\n Enter your choice \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
      push();
      break;
    }
    case 2:
    {
      pop();
      break;
    }
    case 3:
    {
      display();
      break;
    }
    case 4:
    {
      printf("GOOD BYE....");
      break;
    }
    default:
    {
      printf("Please Enter id choice ");
    }
    }
  } while (choice != 4);
  return 0;
}

void push()
{
  int data;
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  if (ptr == NULL)
  {
    printf("not able to push the element");
  }
  else
  {
    printf("Enter the data");
    scanf("%d", &data);
    if (top == NULL)
    {
      ptr->data = data;
      ptr->next = NULL;
      top = ptr;
    }
    else
    {
      ptr->data = data;
      ptr->next = top;
      top = ptr;
    }
    printf("Item pushed");
  }
}

void pop()
{
  int item;
  struct node *ptr;
  if (top == NULL)
  {
    printf("Underflow");
  }
  else
  {
    item = top->data;
    ptr = top;
    top = top->next;
    free(ptr);
    printf("Item popped");
  }
}
void display()
{
  int i;
  struct node *ptr;
  ptr = top;
  if (ptr == NULL)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Printing Stack elements \n");
    while (ptr != NULL)
    {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
    }
  }
}