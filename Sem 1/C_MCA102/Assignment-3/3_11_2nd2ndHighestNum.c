// 11. Write a program to find second-highest number from the array without using sorting.


#include<stdio.h>
#include<limits.h>

int print2ndHighest (int arr[], int size){
  int max = INT_MIN;
  int sl = INT_MIN;
  for(int i = 0; i < size; i++){
      if(max<arr[i]){
          sl = max;
          max = arr[i];
      }
      else if(sl<arr[i] && arr[i]!=max) sl = arr[i];
  }
  return sl;
}

int main(){
  int n; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);



  printf("Second highest number is : %d", print2ndHighest(arr, n));
  
  return 0;
}