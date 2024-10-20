// 18. Write a C program to check whether a character is alphabet or not.

#include<stdio.h>

int main(){
  char ch;
  printf("Enter a character : ");
  scanf("%c", &ch);
  int n = (int)ch;
  if((n >= 65 && n <= 90) || (n >= 97 && n <= 122)) printf("%c is an Alphabet.", ch);
  else printf("%c is not an Alphabet.", ch);

  return 0;
}