// Write a C program to check whether a given string is Palindrome or not.

#include<stdio.h>
#include<string.h>

int main(){
  char str[50];

  printf("Enter the elements of array : ");
  gets(str);

  int check = 0, n = strlen(str);


  for(int s = 0, e = n - 1; s <= e; s++, e--) {
    if(str[s] != str[e]) {
      check = 1;
      break;
    }
  }

  if(check) printf("The given array is not Palindrome");
  else printf("The given array is Palindrome");
  return 0;
}