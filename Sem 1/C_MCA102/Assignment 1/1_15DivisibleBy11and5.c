//15. Write a C program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500.


#include<stdio.h>

int main(){
  int n;
  printf("Enter a number between 100 and 500 : ");
  scanf("%d", &n);

  if(n < 100 || n > 500 ) printf("The Enter number is not in range (100 to 500).");
  else {
    if(n % 5 == 0 && n % 11 == 0) printf("%d is divisible by 5 and 11.", n);
    else printf("%d is not divisible by 5 and 11.", n);
  }
  return 0; 
}