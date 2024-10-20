//Write a C program to find the sum and average of three numbers.


#include<stdio.h>

int main(){
  int num1, num2, num3;

  float sum, avg;

  printf("\n\n***Program to find the sum and average of three numbers***\n");
  printf("Name: Sneha Roy, Class MCA1B, Roll-48 \n ");
  printf("Enter three numbers : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  sum = num1 + num2 + num3;
  avg = sum / 3.0;

  printf("Sum : %d\n\n", sum);
  printf("Average : %f", avg);

  return 0;

}