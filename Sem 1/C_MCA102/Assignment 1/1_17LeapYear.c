// 17. Write a C program to check whether a year is a leap year or not.

#include<stdio.h>

int main(){
  int n;
  printf("Enter a year : ");
  scanf("%d", &n);

  if(n % 100 == 0){
    if(n % 400 == 0) printf("%d is Leap Year.", n);
    else printf("%d is not Leap Year.", n);
  }
  else if(n % 4 == 0) printf("%d is Leap Year.", n);
  else printf("%d is not Leap Year.", n);
  return 0;
}