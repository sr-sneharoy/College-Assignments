//6. Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).


#include <stdio.h>

int main() {
    printf("\n\n***Program to evaluate the algebraic expression (ax+b)/(ax-b).***\n");
    printf("Name: Sneha Roy, Class MCA1B, Roll-48 \n \n");

    float a, b, x;
    printf("Enter the values of a, b and x : ");
    scanf("%f %f %f", &a, &b, &x);

  if((a*x - b) == 0) printf("Erro. ");
  else printf("Result : %lf", ((a * x + b) / (a * x - b)));
    return 0;
}