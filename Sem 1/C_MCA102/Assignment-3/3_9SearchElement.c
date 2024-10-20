// Write a program to search for a particular elements in an array.

#include<stdio.h>

int searching (int arr[], int n, int el){
  for(int i = 0; i < n; i++){
    if(arr[i] == el) return i;
  }
  return -1;
}

int main(){
  int n, element; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter the element you want to search : ");
  scanf("%d", &element);

  printf("Index of required element is : %d", searching(arr, n, element));
  
  return 0;
}