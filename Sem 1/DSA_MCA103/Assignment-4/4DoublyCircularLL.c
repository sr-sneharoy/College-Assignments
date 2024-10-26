 #include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular doubly linked list
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} node;

node* createNode(int data){
  node* newNode = (node*) malloc(sizeof(node));
  newNode -> prev = newNode;
  newNode->data = data;
  newNode->next = newNode;
  return newNode;
}

void display(node* last){  // to print the whole circular linked list
  if(last == NULL) {
    printf("The list is empty.\n\n");
    return;
  }

  node* temp = last -> next ;
  do{
    printf("%d  ->  ", temp -> data);
    temp = temp -> next;
  }while(temp != last -> next );
  printf("\n\n");
}

void InsertBeginning(node** last, int data){  // to insert at beginning 
  node* newNode = createNode(data);
  if(*last == NULL) *last = newNode;

  else {
    newNode -> next = (*last) -> next;
    (*last) -> next = newNode;
    newNode -> prev = *last;
    newNode -> next -> prev = newNode;
  }
}

void InsertEnd(node** last, int data){  // to insert at end 
  node* newNode = createNode(data);
  if(*last == NULL) *last = newNode;

  else {
    newNode -> next = (*last) -> next;
    newNode -> prev = (*last);
    newNode -> next -> prev = newNode;
    (*last) -> next = newNode;
    *last = newNode;
  }
}


void InsertAfterNode (node** last, int target, int data) {
  if (*last == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = (*last)->next;
  
  do {
    if (temp->data == target) {  // Target node found
      node* newNode = createNode(data);
      newNode->next = temp->next;
      temp->next = newNode;
      newNode -> prev = temp;
      newNode -> next -> prev = newNode;
      
      // Update last if we are inserting after the current last node
      if (temp == *last) 
        *last = newNode;
      
      return;
    }
    temp = temp->next;
  } while (temp != (*last)->next);

  printf("The target %d is not found.\n", target);
}



void DeleteBeginning(node** last){  // to delete from beginning 
  if(*last == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = (*last)->next;
  if (*last == temp)   *last = NULL;    // Only one node in the list
   
  else {
    (*last)->next = temp->next;
    temp -> next -> prev = *last;
    }
  
  free(temp);
}

void DeleteEnd(node** last){  // to delete from end 
  if(*last == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = (*last)->next;
  if (temp == *last) {  // Only one node in the list
    free(temp);
    *last = NULL;
  }  
   
  else {
    node* toDel = *last;
    temp->prev = toDel->prev;
    toDel->prev->next = temp;
    *last = toDel->prev;
    free(toDel);
  }
}

void DeleteAfterNode(node** last, int target){  // to delete after a particular node
  if(*last == NULL) {
    printf("The list is empty.\n");
    return;
  }
  
  node* temp = (*last)->next;
  while(temp->data != target) {
    temp = temp->next;
    if(temp == (*last)->next) {
      printf("The target %d is not found.\n", target);
      return;
    }
  }

  node* toDel = temp->next;
  temp->next = toDel->next;
  temp -> next -> prev = temp;
  if (toDel == *last) {
    *last = temp;  // Update last if we're deleting the last node
  }
  free(toDel);

}

void DeleteList(node** last){
    if(*last == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = (*last)->next;
  while(temp != *last) {
    node* toDel = temp;
    temp = temp->next;
    free(toDel);
  }
  free(*last);
  *last = NULL;
}

