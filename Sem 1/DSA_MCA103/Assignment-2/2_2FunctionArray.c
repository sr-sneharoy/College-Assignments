//2. Write a C program to pass an array to a function using Call by Value, update the array values in the function, print the array elements both in the function and in the calling function.

#include<stdio.h>
void Change (int arr[], int n){
  for(int i = 0 ; i < n; i++) arr[i] += 10;
  for(int i = 0 ; i < n; i++) printf("%d  ,", arr[i]);
}

int main(){
  int n, arr[100];
  printf("Enter size of array : ");
  scanf("%d", &n);
  
  printf("Enter Elements : ");
  for(int i = 0 ; i < n; i++) scanf("%d", &arr[i]);
  
  for(int i = 0 ; i < n; i++) printf("%d ,  ", arr[i]);

  printf("\n\n");

  Change(arr, n);
  
  printf("\n\n");

  for(int i = 0 ; i < n; i++) printf("%d ,  ", arr[i]);
  
  return 0;
}