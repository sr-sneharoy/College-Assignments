#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Define pointers for the front and rear of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Function to insert an element into the queue (Enqueue Operation)
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed! Cannot enqueue %d.\n", value);
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d inserted into the queue.\n", value);
}

// Function to delete an element from the queue (Dequeue Operation)
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow! No elements to dequeue.\n");
        return;
    }
    struct Node* temp = front;
    printf("Element %d dequeued from the queue.\n", front->data);
    front = front->next;
    free(temp);
    
    if (front == NULL) {
        rear = NULL; // Reset rear if the queue becomes empty
    }
}

// Function to display the front element without deleting it (Peep Operation)
void peep() {
    if (front == NULL) {
        printf("Queue is empty! No elements to peep.\n");
    } else {
        printf("Front element of the queue: %d\n", front->data);
    }
}

// Function to display all elements of the queue
void display() {
    if (front == NULL) {
        printf("Queue is empty! No elements to display.\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function with menu-driven options
int main() {
    int choice, value;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peep (Front element)\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peep();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
