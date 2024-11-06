#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Define the maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the circular queue
void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow! Cannot insert %d.\n", value);
        return;
    }
    if (front == -1) front = 0;  // Initialize front when inserting the first element
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("%d inserted into the circular queue.\n", value);
}

// Function to delete an element from the circular queue
void dequeue() {
    if (front == -1) {
        printf("Queue Underflow! No elements to delete.\n");
        return;
    }
    printf("Element %d dequeued from the circular queue.\n", queue[front]);
    if (front == rear) {
        // Reset queue when it becomes empty
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

// Function to display the front element without deleting it
void peek() {
    if (front == -1) {
        printf("Circular Queue is empty! No elements to peek.\n");
    } else {
        printf("Front element of the circular queue: %d\n", queue[front]);
    }
}

// Function to display all elements of the circular queue
void display() {
    if (front == -1) {
        printf("Circular Queue is empty! No elements to display.\n");
        return;
    }
    printf("Circular Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main function with menu-driven options
int main() {
    int choice, value;
    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek (Front element)\n");
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
                peek();
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
