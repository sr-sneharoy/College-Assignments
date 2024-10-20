//13. Write a C program to find the maximum between three numbers.

#include<stdio.h>

int main(){
  int a, b, c;
  printf("Enter three number : ");
  scanf("%d %d %d", &a , &b, &c);

  if(a >= b && a >= c) printf("The maximum number is : %d ", a);
  else if(b >= a && b >= c) printf("The maximum number is : %d ", b);
  else printf("The maximum number is : %d", c);
  return 0;
}