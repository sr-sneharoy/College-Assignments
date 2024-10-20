// 6. Write a C program to read an integer number and print the reverse of that number using recursion.


#include<stdio.h>

void reverse(int n){
  if(n == 0) return ;
  else {
    printf("%d", n%10);
    return reverse(n / 10);
  }
}

int main(){

  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Result : ");
  reverse(n);

  return 0;
}