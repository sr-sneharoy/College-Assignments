//3. Write a program to insert an element in an array in a particular position.

#include <stdio.h>

int main(){
  int arr[100];

  int n; 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  int position, element;

  printf("Enter elements for the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter the position to insert the new element (0 to %d): ", n);
  scanf("%d", &position);

  if (position < 0 || position > n) 
    printf("Invalid position! Please enter a position between 0 and %d.\n", n);
  else {
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    n++;
    for(int i = n; i > position; i--)
      arr[i] = arr[i - 1];

    arr[position] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
  }    

  return 0;
}