//11. Write a C program to check whether a number is a palindrome or not.

#include<stdio.h>

int main(){

  int num, n, remainder, reverseNum;
  printf("Enter a number : ");
  scanf("%d", &num);

  n = num;
  while (n != 0){
    remainder = n % 10;
    reverseNum = reverseNum *10 + remainder;
    n /= 10;
  }

  if(num == reverseNum) printf("%d is Palindrome.", num);
  else printf("%d is not Palindrome.", num);

  return 0;

}