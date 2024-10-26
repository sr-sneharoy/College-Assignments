#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} node;

node* createNode(int data) {  // to create a node
  node* newNode = (node*)malloc(sizeof(struct Node));
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
    node* temp = *last;
    newNode -> next = (*last) -> next;
    (*last) -> next = newNode;
  }
}

void InsertEnd(node** last, int data){  // to insert at end 
  node* newNode = createNode(data);
  if(*last == NULL) *last = newNode;

  else {
    newNode -> next = (*last) -> next;
    (*last) -> next = newNode;
    *last = newNode;
  }
}

void InsertAfterNode(node** last, int target, int data) {
  if (*last == NULL) {
    printf("The list is empty.\n");
    return;
  }

  node* temp = (*last)->next;
  
  // Traverse the list to find the target node
  do {
    if (temp->data == target) {  // Target node found
      node* newNode = createNode(data);
      newNode->next = temp->next;
      temp->next = newNode;
      
      // Update last if we are inserting after the current last node
      if (temp == *last) {
        *last = newNode;
      }
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
   
  else (*last)->next = temp->next;
  
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
    while(temp -> next != (*last))
      temp = temp -> next;
    temp -> next = (*last) -> next;
    free(*last);
    *last = temp;
    
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

int main(){

  // node* node1 = NULL;
  node* node1 = createNode(10);
  display(node1);

  InsertBeginning(&node1, 20);
  InsertBeginning(&node1, 30);
  InsertBeginning(&node1, 40);
  InsertBeginning(&node1, 50);
  display(node1);


  InsertEnd(&node1, 70);
  InsertEnd(&node1, 80);
  InsertEnd(&node1, 90);
  display(node1);

  printf("\n\n");
  DeleteAfterNode(&node1, 500);
  display(node1);

  printf("\n\n");
  DeleteList(&node1);

  display(node1);


  return 0;
}


