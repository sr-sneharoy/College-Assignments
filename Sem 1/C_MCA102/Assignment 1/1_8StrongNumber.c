//8. Write a C program to check if a given number is a strong number.

#include<stdio.h>

int factorial (int n){
  int fact = 1;
  for(int i = 1; i <= n; i++){
    fact *= i;
  }
  return fact;
}

int main(){

  printf("\n\n******\n");
  printf("Name: Sneha Roy, Class MCA1B, Roll-48 \n \n");

  int n, temp, sum = 0, digit;
  printf("Enter a number : ");
  scanf("%d", &n);

  temp = n;

  while(temp != 0){
    digit = temp % 10;
    sum += factorial(digit);
    temp /= 10;
  }

  if(sum == n) printf("%d is a Strong Number.", n);
  else printf("%d is not a Strong Number.", n);

  return 0;
}