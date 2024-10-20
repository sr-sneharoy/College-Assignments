// 1. Write a C program to add, subtract, multiply, and divide two integers using a user-defined type function with a return type.

#include <stdio.h>

int add (int a, int b){
  return a + b;
}
int subtract (int a, int b){
  return a - b;
}
int multiply (int a, int b){
  return a * b;
}
int divide (int a, int b){
  return (float)a / b;
}

int main() {
  int a, b, choice;


  do {
    printf("\n\nChoose an Operation: \n");
    printf("Press 1 to add\n");
    printf("Press 2 to subtract\n");
    printf("Press 3 to multiply\n");
    printf("Press 4 to divide\n");
    printf("Press 5 to exit\n");
    scanf("%d", &choice);

    printf("\n\nEnter two integers : ");
    scanf("%d %d", &a, &b);

    switch (choice){
    case 1: 
      printf("Sum :  %d", add(a,b));
      break;
    
    case 2: 
      printf("Difference :  %d", subtract(a,b));
      break;
    
    case 3: 
      printf("Product :  %d", multiply(a,b));
      break;
    
    case 4: 
      if(b != 0)printf("Quotient :  %d", divide(a,b));
      else printf("Error: Division by Zero!");
      break;

    case 5: 
      printf("Exit");
      break;
    
    default: printf("Invalid Choice!!");
    } 
  } while (choice != 5);
  
  return 0;
}