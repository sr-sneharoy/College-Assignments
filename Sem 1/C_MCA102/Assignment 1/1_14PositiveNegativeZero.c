// 14. Write a C program to check whether a number is negative, positive, or zero.

#include<stdio.h>

int main(){
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  if(n > 0 ) printf("%d is positive number. ", n);
  else if(n < 0) printf("%d is negative number. ", n);
  else printf("%d is zero.", n);
  return 0;
}