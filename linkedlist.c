#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head = NULL;

void insert_front(int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = head;
  head = new_node;
}

void insert_end(int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;

  struct node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next = new_node;
}

void insert_middle(int data, int position) {
	int i;
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;

  struct node *current = head;
  for ( i = 1; i < position; i++) {
    current = current->next;
  }

  new_node->next = current->next;
  current->next = new_node;
}

void delete_front() {
  struct node *temp = head;
  head = head->next;
  free(temp);
}

void delete_end() {
  struct node *current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }

  struct node *temp = current->next;
  current->next = NULL;
  free(temp);
}

void delete_middle(int position) {
	int i;
  struct node *current = head;
  for ( i = 1; i < position; i++) {
    current = current->next;
  }

  struct node *temp = current->next;
  current->next = temp->next;
  free(temp);
}

void display() {
  struct node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  int choice;
  int data;
  int position;

  while (1) {
    printf("Select an operation:\n");
    printf("1. Insert at front\n");
    printf("2. Insert at end\n");
    printf("3. Insert at middle\n");
    printf("4. Delete from front\n");
    printf("5. Delete from end\n");
    printf("6. Delete from middle\n");
    printf("7. Display\n");
    printf("8. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to insert: ");
        scanf("%d", &data);
        insert_front(data);
        break;
      case 2:
        printf("Enter data to insert: ");
        scanf("%d", &data);
        insert_end(data);
        break;
      case 3:
        printf("Enter data to insert: ");
        scanf("%d", &data);
        printf("Enter position to insert: ");
        scanf("%d", &position);
        insert_middle(data, position);
        break;
      case 4:
        delete_front();
        break;
      case 5:
        delete_end();
        break;
      case 6:
        printf("Enter position to delete: ");
        scanf("%d", &position);
        delete_middle(position);
        break;
      case 7:
        display();
        break;
      case 8:
        return 0;
        break;
      default:
        printf("Invalid choice.\n");
        break;
    }
  }
}
