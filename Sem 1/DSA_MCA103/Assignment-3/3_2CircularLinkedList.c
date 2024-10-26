#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
struct Node {
  int data;
  struct Node *next;
};

// Function to create a circular linked list with a single node
struct Node* createNode(int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = newNode;
  return newNode;
}

// Function to display all elements in the circular linked list
void display(struct Node* last) {
  if (last == NULL) {
    printf("List is empty.\n");
    return;
  }
  struct Node* temp = last->next;
  do {
    printf("%d ", temp->data);
    temp = temp->next;
  } while (temp != last->next);
  printf("\n");
}

// Function to insert a node at the beginning of the circular linked list
struct Node* insertAtBeginning(struct Node* last, int data) {
  struct Node* newNode = createNode(data);
  if (last == NULL) {
    last = newNode;
  } else {
    newNode->next = last->next;
    last->next = newNode;
  }
  return last;
}

// Function to insert a node at the end of the circular linked list
struct Node* insertAtEnd(struct Node* last, int data) {
  struct Node* newNode = createNode(data);
  if (last == NULL) {
    return newNode;
  }
  newNode->next = last->next;
  last->next = newNode;
  last = newNode;
  return last;
}

// Function to delete a node from the beginning of the circular linked list
struct Node* deleteFromBeginning(struct Node* last) {
  if (last == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  struct Node* temp = last->next;
  if (last == temp) {
    free(temp);
    return NULL;
  }
  last->next = temp->next;
  free(temp);
  return last;
}

// Function to delete a node from the end of the circular linked list
struct Node* deleteFromEnd(struct Node* last) {
  if (last == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  struct Node* temp = last->next;
  if (last == temp) {
    free(last);
    return NULL;
  }
  while (temp->next != last) {
    temp = temp->next;
  }
  temp->next = last->next;
  free(last);
  last = temp;
  return last;
}

// Function to delete a node after a given node in the circular linked list
struct Node* deleteAfterNode(struct Node* last, int value) {
  if (last == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  struct Node* temp = last->next;
  do {
    if (temp->data == value) {
      struct Node* nodeToDelete = temp->next;
      if (nodeToDelete == last) {
        last = temp;
      }
      temp->next = nodeToDelete->next;
      free(nodeToDelete);
      return last;
    }
    temp = temp->next;
  } while (temp != last->next);
    printf("Node with value %d not found.\n", value);
    return last;
}

// Function to delete the entire circular linked list
struct Node* deleteList(struct Node* last) {
  if (last == NULL) return NULL;
  struct Node* current = last->next;
  while (current != last) {
    struct Node* temp = current;
    current = current->next;
    free(temp);
  }
  free(last);
  printf("Entire list deleted.\n");
  return NULL;
}

int main() {
  struct Node* last = NULL;
  int choice, data, value;

  do {
    printf("\nCircular Linked List Operations:\n");
    printf("1. Create circular linked list\n");
    printf("2. Display elements\n");
    printf("3. Insert at beginning\n");
    printf("4. Insert at end\n");
    printf("5. Delete from beginning\n");
    printf("6. Delete from end\n");
    printf("7. Delete after a node\n");
    printf("8. Delete entire list\n");
    printf("9. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to create list: ");
        scanf("%d", &data);
        last = createNode(data);
        break;
      case 2:
        display(last);
        break;
      case 3:
        printf("Enter data to insert at beginning: ");
        scanf("%d", &data);
        last = insertAtBeginning(last, data);
        break;
      case 4:
        printf("Enter data to insert at end: ");
        scanf("%d", &data);
        last = insertAtEnd(last, data);
        break;
      case 5:
        last = deleteFromBeginning(last);
        break;
      case 6:
        last = deleteFromEnd(last);
        break;
      case 7:
        printf("Enter value after which to delete: ");
        scanf("%d", &value);
        last = deleteAfterNode(last, value);
        break;
      case 8:
        last = deleteList(last);
        break;
      case 9:
        printf("Exiting program.\n");
        break;
      default:
        printf("Invalid choice. Try again.\n");
    }
  } while (choice != 9);

  return 0;
}
