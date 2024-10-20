//16. Write a C program to check whether a number is even or odd.

#include<stdio.h>

int main(){
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  if(n == 0) printf("Enter number is zero.");
  else if(n % 2 == 0 ) printf("%d is an even number.", n);
  else  printf("%d is an odd number.", n);
  return 0;
}