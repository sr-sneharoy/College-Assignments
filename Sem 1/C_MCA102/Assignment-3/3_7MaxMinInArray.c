//7. Write a program to find the smallest and the largest elements in an array.

#include <stdio.h>

int smallest(int arr[], int n){
  int min = arr[0];

  for(int i = 1; i < n; i++){
    if(arr[i] < min) min = arr[i];
  }
  return min;
}
int largest(int arr[], int n){
  int max = arr[0];

  for(int i = 1; i < n; i++){
    if(arr[i] > max) max = arr[i];
  }
  return max;
}

int main(){
  int n; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Largest Element :  %d \n", largest(arr, n));
  printf("Smallest Element :  %d \n", smallest(arr, n));
  
  return 0;
}