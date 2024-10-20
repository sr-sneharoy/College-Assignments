//4. Write a program to delete an element from a particular position of an array.

#include <stdio.h>

int main(){
  int arr[100];
  int n; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  int position;

  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter the position to delete (0 to %d): ", n-1);
  scanf("%d", &position);

  if (position < 0 || position >= n) 
    printf("Invalid position! Please enter a position between 0 and %d.\n", n);
  else {
    for(int i = position; i < n - 1; i++)
      arr[i] = arr[i + 1];
    
    n--;
    
    printf("Array after deletion :\n");
    for (int i = 0; i < n; i++) 
      printf("%d ", arr[i]);
    
  }    

  return 0;
}