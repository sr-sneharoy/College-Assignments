// Write a C program to sort an array.

#include<stdio.h>

void BubbleSort(int arr[], int n){

  for(int i = n - 2; i >= 0; i--){

    int isSwapped = 0;
    for(int j = 0; j <= i; j++){
      if(arr[j] > arr[j + 1]){
        isSwapped = 1;
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    if(!isSwapped) break;
  }

}

int main(){

  int n;
  printf("Enter the size of an array : ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the elements of array : ");
  for(int i = 0; i < n; i++) scanf("%d",&arr[i]);


  BubbleSort(arr, n);
  printf("After sorting the given array: \n");

  for (int i = 0; i < n; i++) printf("%d , " , arr[i]);
  
  return 0;
}