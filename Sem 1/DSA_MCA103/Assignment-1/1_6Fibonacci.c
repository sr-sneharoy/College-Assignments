// Write a C program to display Fibonacci series.

#include<stdio.h>

int main(){
  int n, sum = 1, a = 1, b = 1;
  printf("Enter the term : ");
  scanf("%d", &n);
  if(n >= 1) printf("1  , ");
  for(int i = 2; i <= n; i++){
    printf("%d  , ", sum);
    sum = a + b;
    a = b ;
    b = sum;
    
  }
  return 0;
}