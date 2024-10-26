#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} node;


node* createNode(int data){
  node* newNode = (node*) malloc(sizeof(node));
  newNode -> data = data;
  newNode -> prev = NULL;
  newNode -> next = NULL;
  return newNode;
}

void display(node* head){
  if(head == NULL) {
    printf("List is empty.\n");
    return;
  }
  node* temp = head;
  while(temp != NULL) {
    printf("%d   ", temp->data);
    temp = temp -> next;
  }
  printf("NULL\n");
}


void InsertAtHead(node** head, int data) {
  node* temp = createNode(data);
  temp->next = *head;
  if((*head) != NULL) (*head) -> prev = temp;
  *head = temp;
}

void InsertAtEnd(node** head, int data) { 
  node* newNode = createNode(data);
  if(*head == NULL) *head = newNode;

  else {
    node* temp = *head;
    while(temp->next != NULL)
      temp = temp->next;
    temp->next = newNode;
    newNode -> prev = temp;
  }
}

void InsertBeforeNode(node** head, int target, int data) {
  if (*head == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = *head;

  while (temp != NULL && temp->data != target) 
    temp = temp->next;

  if (temp == NULL) {
    printf("The target %d is not found.\n", target);
    return;
  }


  // Case when the target node is the head node
  if (temp == *head) {
   InsertAtHead(head, data);
   return;
  } 
  else {
    node* newNode = createNode(data);
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev->next = newNode;
    temp->prev = newNode;
  }
}

void InsertAfterNode(node** head, int target, int data) {
  if (*head == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = *head;

  while (temp != NULL && temp->data != target) 
    temp = temp->next;

  if (temp == NULL) {
    printf("The target %d is not found.\n", target);
    return;
  }

  else {
    node* newNode = createNode(data);
    newNode->prev = temp;
    newNode->next = temp -> next;
    if(temp -> next != NULL) temp->next->prev = newNode;
    temp->next = newNode;
  }
}


void DeleteAtHead(node** head){
  if(*head == NULL) printf("The list is empty.\n");

  else{
    if((*head) -> next == NULL) {
      free(*head);
      *head = NULL;
    }
    else{
      node* temp = *head;
      *head = (*head) -> next;
      (*head) -> prev = NULL;
      free(temp);
    }
  }
}

void DeleteAtEnd(node** head){
  if(*head == NULL) printf("The list is empty.\n");
  
  else{
    if((*head) -> next == NULL) {
      free(*head);
      *head = NULL;
    }
    else{
      node* temp = *head;
      while(temp -> next != NULL) temp = temp -> next;
      temp -> prev -> next = NULL;
      free(temp);
    }
  }
}

void DeleteBeforeNode(node** head, int target){
  if (*head == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = *head;

  while (temp != NULL && temp->data != target) 
    temp = temp->next;

  if (temp == NULL) {
    printf("The target %d is not found.\n", target);
    return;
  }


  // Case when the target node is the head node
  if (temp == *head) {
   printf("There is no node to delete.\n");
   return;
  } 
  node* toDel = temp->prev;
  if (toDel == *head) *head = temp; // Update head if the deleted node was the head
  else toDel->prev->next = temp;
  
  temp->prev = toDel->prev;
  free(toDel);
}

void DeleteAfterNode(node** head, int target){
  if (*head == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = *head;

  while (temp != NULL && temp->data != target) 
    temp = temp->next;

  if (temp == NULL) {
    printf("The target %d is not found.\n", target);
    return;
  }
  else if(temp -> next == NULL) printf("There is nothing to delete.\n");

  else {
    node* toDel = temp -> next;
    temp -> next = toDel -> next;
    if (toDel->next != NULL) toDel->next->prev = temp;
    free(toDel);
  }
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
  
  DeleteAtHead(&node1);
  display(node1);

  printf("\n\n");
  
  DeleteAtEnd(&node1);
  display(node1);

  printf("\n\n");
  
  DeleteAfterNode(&node1, 30);
  display(node1);

  printf("\n\n");
  
  deleteList(&node1);
  display(node1);


  printf("\n\n");
  
  DeleteAtHead(&node1);
  display(node1);



  return 0;
}
