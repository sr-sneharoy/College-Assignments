// 10. Write a C program to find the power of any number using recursion.

#include<stdio.h>

int power(int base, int pow){
  if(pow == 1) return base;

  return base * power(base, pow - 1);

}

int main(){
  int base, pow;
  printf ("Enter base and Exponent : ");
  scanf("%d %d", &base, &pow);

  printf("Result: %d", power(base, pow));

  return 0;
}