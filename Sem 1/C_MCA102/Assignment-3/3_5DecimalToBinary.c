//5. Write a program to convert a decimal number taken as input from a user to the corresponding binary number and store the result in an array.


#include <stdio.h>

int noOfDigit(int n){
  int count = 0;
  while(n){
    count++;
    n /= 2;
  }
  return count;
}
int main(){
  int n; 
  printf("Enter a number : ");
  scanf("%d", &n);
  
  int arrSize = noOfDigit(n);
  int arr[arrSize], i = arrSize - 1;

  while(n){
    arr[i] = n % 2;
    n /= 2;
    i--;
  }

  for (int i = 0; i < arrSize; i++) printf("%d", arr[i]);
  

  return 0;
}