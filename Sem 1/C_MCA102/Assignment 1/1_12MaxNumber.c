// 12. Write a C program to find the maximum between two numbers.


#include<stdio.h>

int main(){
  int a, b;
  printf("Enter two number : ");
  scanf("%d %d", &a , &b);

  if(a > b) printf("The maximum number is : %d ", a);
  else if(b > a) printf("The maximum number is : %d ", b);
  else printf("Both numbers are equal.");
  return 0;

}