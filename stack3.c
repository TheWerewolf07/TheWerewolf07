#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Stack {
  struct Node* head;
};

void push(struct Stack* stack, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = stack->head;
  stack->head = new_node;
}

int pop(struct Stack* stack) {
  if (stack->head == NULL) {
    return -1;
  }

  struct Node* top_node = stack->head;
  int top_data = top_node->data;
  stack->head = top_node->next;
  free(top_node);

  return top_data;
}

int peek(struct Stack* stack) {
  if (stack->head == NULL) {
    return -1;
  }

  return stack->head->data;
}

int is_empty(struct Stack* stack) {
  return stack->head == NULL;
}

void display(struct Stack* stack) {
  struct Node* current = stack->head;

  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }

  printf("\n");
}

int main() {
  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
  stack->head = NULL;

  push(stack, 10);
  push(stack, 20);
  push(stack, 30);

  display(stack);

  int top_data = pop(stack);
  printf("Popped data: %d\n", top_data);

  display(stack);

  if (is_empty(stack)) {
    printf("Stack is empty\n");
  } else {
    printf("Stack is not empty\n");
  }

  return 0;
}

