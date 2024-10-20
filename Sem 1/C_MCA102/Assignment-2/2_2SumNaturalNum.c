// 2. Write a C program to calculate the sum of the first 20 natural numbers using a recursive function.

#include<stdio.h>

int sum(int n){
  if(n == 0 || n == 1) return n;

  else return n + sum(n - 1);
}

int main(){
  printf("Result : %d", sum(20));
  return 0;
}