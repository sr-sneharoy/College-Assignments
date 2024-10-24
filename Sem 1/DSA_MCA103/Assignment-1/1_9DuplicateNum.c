// Write a C program to check duplicate number in an array.


#include<stdio.h>

int main(){
  int n, sum = 0, check = 0, dup;
  printf("Enter the size of an array : ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the elements of array : ");
  for(int i = 0; i < n; i++) scanf("%d",&arr[i]);

  for(int i = 0; i < n; i++) 
    for(int j = i + 1; j < n; j++){
      if(arr[i] == arr[j]) {
        check = 1;
        dup = arr[i];
        break;
      }
    }

  if(check) printf("Duplicate number is : %d", dup);
  else printf("There is no duplicate number in this array.");

  return 0;
}