#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Queue {
  struct Node *front;
  struct Node *rear;
};

void initQueue(struct Queue *queue) {
  queue->front = NULL;
  queue->rear = NULL;
}

void enqueue(struct Queue *queue, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  if (queue->front == NULL) {
    queue->front = newNode;
    queue->rear = newNode;
  } else {
    queue->rear->next = newNode;
    queue->rear = newNode;
  }
}

int dequeue(struct Queue *queue) {
  int data;
  struct Node *temp;

  if (queue->front == NULL) {
    printf("Queue is empty\n");
    return -1;
  }

  temp = queue->front;
  data = temp->data;
  queue->front = queue->front->next;
  free(temp);

  return data;
}

void printQueue(struct Queue *queue) {
  struct Node *temp = queue->front;

  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main() {
  struct Queue queue;
  int data, choice;

  initQueue(&queue);

  while (1) {
    printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to enqueue: ");
        scanf("%d", &data);
        enqueue(&queue, data);
        break;
      case 2:
        data = dequeue(&queue);
        if (data != -1) {
          printf("Dequeued data: %d\n", data);
        }
        break;
      case 3:
        printQueue(&queue);
        break;
      case 4:
        return 0;
    }
  }

  return 0;
}
