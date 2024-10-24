// Write a C program to check the sum of all elements of an array.


#include<stdio.h>

int main(){
  int n, sum = 0;
  printf("Enter the size of an array : ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the elements of array : ");
  for(int i = 0; i < n; i++) scanf("%d",&arr[i]);

  for(int i = 0; i < n; i++) sum += arr[i];

  printf("Sum : %d", sum);
  return 0;
}