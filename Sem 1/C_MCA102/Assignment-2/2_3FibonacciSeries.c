// 3. Write a C program to generate a Fibonacci series using a recursive function.

#include<stdio.h>

int Fibonacci(int term){
  if(term == 0 || term == 1) return term;
  else return Fibonacci(term - 1) + Fibonacci(term - 2);

}

int main(){
  int term;

  printf("Enter the term : ");
  scanf("%d", &term);
  printf("Result : " );
  for(int i = 0; i < term; i++) printf("%d , ", Fibonacci(i));

  return 0;
}