// 5. Write a C program to print the largest and second largest element of the array.

#include<stdio.h>
#include<limits.h>

int maxEl(int arr[], int n){
  int max = arr[0];
  for( int i = 0; i < n ; i++){
    if(max < arr[i]) max = arr[i];
  }
  return max;
}
int secondMax(int arr[], int n){
  int max = INT_MIN, smax = INT_MIN;
  for( int i = 0; i < n ; i++){
    if(max < arr[i]) {
      smax = max;
      max = arr[i];
    }
    if(arr[i] != max && arr[i] > smax) smax = arr[i];
  }
  return smax;
}

int main(){
  int n;
  printf("Enter the size of an array : ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the elements of array : ");
  for(int i = 0; i < n; i++) scanf("%d",&arr[i]);

  printf("Largest element is : %d\n\n", maxEl(arr, n));
  printf("Second Largest element is : %d", secondMax(arr, n));
  return 0;
}