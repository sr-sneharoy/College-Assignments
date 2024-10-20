// 4. Write a C program to swap two integers using call-by-value and call-by-reference methods of passing arguments to a function.

#include<stdio.h>

void swapPassByValue(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  printf("Inside the 'swapPassByValue' function =>  a : %d ,  b: %d \n" , a ,b);
}
void swapPassByReference(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("\n\nInside the 'swapPassByReference' function =>  a : %d ,  b: %d \n" , *a ,*b);
}

int main(){
  int a, b;
  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("Enter the value of b : ");
  scanf("%d", &b);

  //Pass By value
  swapPassByValue(a, b);
  printf("\n  outside 'swapPassByValue' function a : %d ,  b: %d " , a ,b);  //no change


  //Pass by Reference
  swapPassByReference(&a, &b);
  printf("\n  outside 'swapPassByReference' function a : %d ,  b: %d " , a ,b);  //no change


  return 0;
}