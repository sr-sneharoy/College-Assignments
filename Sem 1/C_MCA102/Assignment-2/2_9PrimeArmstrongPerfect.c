//9. Write a C program to check whether a number is a prime, Armstrong, or Perfect number using functions.

#include<stdio.h>

void isArmstrong (int num){
  int n, digitCount = 0, remainder, sum = 0;
  n = num;
    while (n != 0) {
        n = n / 10;
        digitCount++;
    }
    n = num;
    while (n != 0) {
        remainder = n % 10;
        int power = 1;
        for (int i = 0; i < digitCount; i++) {
            power *= remainder;
        }
        sum += power;
        n /= 10;
    }
    if( num == sum) printf("%d is an Armstrong number.\n\n", num);
    else printf("%d is an Armstrong number.\n\n", num);
}

void isPrime (int n){
  for (int i = 2; i < n; i++) {
    if(n % i == 0) {
      printf("%d is not a Prime number.\n\n" , n);
      return;
    }
  }
  if(n == 1) printf("1 is not a Prime Number.\n\n");
  else printf("%d is a Prime Number.\n\n", n);
}

void isPrefect(int n){
  int sum = 0;

  for(int i = 1; i < n; i++){
    if(n % i == 0){
      sum += i;
    }
  }

  if(sum == n) printf("%d is a Prefect Number.\n\n", n);
  else printf("%d is not a Prefect Number.\n\n", n);

}

int main(){

  int n;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Result : \n");

  isArmstrong(n);
  isPrime(n);
  isPrefect(n);

  return 0;
}