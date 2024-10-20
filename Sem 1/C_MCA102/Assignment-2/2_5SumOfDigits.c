//5. Write a C program to find the sum of the digits of the number using a recursive function.

#include<stdio.h>

int sumOfDigit(int n){
  if(n == 0) return 0;

  else return (n% 10 ) + sumOfDigit(n / 10);
}

int main(){

  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Result : %d", sumOfDigit(n));

  return 0;
}