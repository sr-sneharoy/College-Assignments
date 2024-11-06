#include<stdio.h>
#include <stdlib.h>

typedef struct Queue {
  int* arr;
  int size;
  int front;
  int rear;
} q;

q* createQueue(int n){
  q* newQ = (q*) malloc(sizeof(q));
  newQ -> size = n;
  newQ -> front = 0;
  newQ -> rear = 0;
  newQ->arr = (int*) malloc(n * sizeof(int));
  return newQ;
}

void enqueue(q** que, int data){
  int rear = (*que) ->  rear;
  int size = (*que) ->  size;
  if(rear == size)printf("Queue is full.\n");
  else{
    (*que) -> arr[rear] = data;
    rear++;
  }
  (*que) ->  rear = rear;
}

void dequeue(q** que){
  int front = (*que) ->  front;
  int rear = (*que) ->  rear;

  if(front == rear)printf("Queue is empty");
  else{
      (*que) -> arr[front] = -1;
      front++; 
      if(front == rear){
          front = 0;
          rear = 0;
      }
  }
  (*que) ->  rear = rear;
  (*que) ->  front = front;

}

void FrontElement(q* que){
  int front = (que) ->  front;
  int rear = (que) ->  rear;
  if(front == rear) printf("Queue is empty.\n"); //empty Queue
  else printf("The front element is : %d\n\n", (que) -> arr[front]) ;
}


void display(q* que){
  int front = que ->  front;
  int rear = que ->  rear;

  if(front == rear) printf("Queue is empty\n");
  else{
    for(int i = front; i < rear; i++)
      printf("%d   ", que -> arr[i]);
    printf("\n\n");
  }
}

void destroyQueue(q* que) {
    if (que->arr != NULL) {
        free(que->arr);
    }
    free(que);
}


int main(){
  q* que = createQueue(5);

  display(que);

  enqueue(&que, 10);
  enqueue(&que, 20);
  enqueue(&que, 30);
  enqueue(&que, 40);
  display(que);
  FrontElement(que);

  dequeue(&que);
  display(que);
  FrontElement(que);

  destroyQueue(que);   // Free memory when done
}
