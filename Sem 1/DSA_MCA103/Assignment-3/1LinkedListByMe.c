#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} node;

node* createNode(int data) { 
  node* newNode = (node*)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void InsertAtHead(node** head, int data) {
  node* temp = createNode(data);
  temp->next = *head;
  *head = temp;
}

void InsertAtEnd(node** head, int data) { 
  node* newNode = createNode(data);
  if(*head == NULL) {
    *head = newNode;
  } else {
    node* temp = *head;
    while(temp->next != NULL)
      temp = temp->next;
    temp->next = newNode;
  }
}

void InsertBeforeNode(node** head, int target, int data) {  
  if(*head == NULL) {
    printf("List is empty\n");
    return;
  }
  if((*head)->data == target) {
    InsertAtHead(head, data);
    return;
  }
  node* newNode = createNode(data);
  node* temp = *head;
  while(temp->next != NULL && temp->next->data != target)
    temp = temp->next;
  if(temp->next == NULL) {
    printf("The target %d is not found.\n", target);
    free(newNode);
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void InsertAfterNode(node** head, int target, int data) {
  if(*head == NULL) {
    printf("List is empty\n");
    return;
  }
  node* newNode = createNode(data);
  node* temp = *head;
  while(temp != NULL && temp->data != target) 
    temp = temp->next;
  if(temp == NULL) {
    printf("The target %d is not found.\n", target);
    free(newNode);
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void DeleteFromBeginning(node** head) {  
  if (*head == NULL) {
    printf("List is empty.\n");
    return;
  }
  node* temp = *head;
  *head = temp->next;
  free(temp);
}

void DeleteFromEnd(node** head) {  
  if (*head == NULL) {
    printf("List is empty.\n");
    return;
  }
  if ((*head)->next == NULL) { 
    free(*head);
    *head = NULL;
    return;
  }
  node* temp = *head;
  while (temp->next->next != NULL) 
    temp = temp->next;
  node* toDelete = temp->next;
  temp->next = NULL;
  free(toDelete);
}

void DeleteAfterNode(node** head, int target) {  
  if(*head == NULL) {
    printf("List is empty\n");
    return;
  }
  node* temp = *head;
  while(temp != NULL && temp->data != target) 
    temp = temp->next;
  if(temp == NULL || temp->next == NULL) {
    printf("The target %d is not found or no element after it.\n", target);
    return;
  }
  node* toDel = temp->next;
  temp->next = temp->next->next;
  free(toDel);
}

void deleteList(node** head) {  
  node* temp;
  while (*head != NULL) {
    temp = *head;
    *head = temp->next;
    free(temp);
  }
  printf("Entire list deleted.\n");
}

void display(node* head) {  
  if(head == NULL) {
    printf("List is empty.\n");
    return;
  }
  node* temp = head;
  while(temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main(){

  node* node1 = createNode(10);
  display(node1);

  InsertAtHead(&node1, 20);
  InsertAtEnd(&node1, 30);
  InsertAtEnd(&node1, 40);
  InsertAtEnd(&node1, 50);
  display(node1);
  InsertBeforeNode(&node1, 400, 100);
  display(node1);

  InsertBeforeNode(&node1, 40, 100);
  display(node1);

  printf("\n\n");

  InsertAfterNode(&node1, 1000, 200);
  display(node1);
  InsertAfterNode(&node1, 10, 200);
  display(node1);

  printf("\n\n");
  
  DeleteFromBeginning(&node1);
  display(node1);

  printf("\n\n");
  
  DeleteFromEnd(&node1);
  display(node1);

  printf("\n\n");
  
  DeleteAfterNode(&node1, 30);
  display(node1);

  printf("\n\n");
  
  deleteList(&node1);
  display(node1);


  printf("\n\n");
  
  DeleteFromBeginning(&node1);
  display(node1);



  return 0;
}