//8. Write a program for deleting duplicate elements in an array.

#include<stdio.h>

void deleteElement (int arr[], int **n, int pos){
  int temp = **n;
  for(int i = pos; i < temp; i++){
    arr[i] = arr[i + 1];
  }
  temp--;
  **n = temp;
}

void deleteDuplicate(int arr[], int *n){
  int temp = *n;
  for(int i = 0; i < temp; i++){
    for(int j = i + 1; j < temp; j++){
      if(arr[i] == arr[j]) deleteElement(arr, &n, j);
    }
  }
}

int main(){
  int n; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  deleteDuplicate(arr, &n);

  printf("After Deleting duplicate elements: \n");
  for(int i = 0; i < n; i++) printf("%d   ", arr[i]);
  
  return 0;
}