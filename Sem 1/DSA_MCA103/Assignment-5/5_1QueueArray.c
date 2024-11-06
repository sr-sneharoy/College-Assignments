#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Define the maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d.\n", value);
        return;
    }
    if (front == -1) front = 0; // Initialize front when inserting the first element
    queue[++rear] = value;
    printf("%d inserted into the queue.\n", value);
}

// Function to delete an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No elements to delete.\n");
        return;
    }
    printf("Element %d dequeued from the queue.\n", queue[front++]);
    if (front > rear) front = rear = -1; // Reset queue when it becomes empty
}

// Function to display the front element without deleting it (Peep operation)
void peep() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! No elements to peep.\n");
    } else {
        printf("Front element of the queue: %d\n", queue[front]);
    }
}

// Function to display all elements of the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! No elements to display.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
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
