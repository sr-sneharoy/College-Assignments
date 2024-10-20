// 8. Write a C program to check whether a number is even or odd using functions.

#include<stdio.h>

char* OddEven(int n){
  if(n == 0) return "Zero";
  else if( n % 2 == 0 ) return "Even";
  else return "Odd";
}


int main(){

  int num;
  printf("Enter a number : ");
  scanf("%d", &num);

  printf("The number %d is :  %s", num, OddEven(num));



  return 0;
}