// 8. Write a program to allocate memory using malloc ( ) and then reallocate the previously allocated memory using realloc( ). Display the elements which have been taken after reallocation.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Enter number of elements you want : ");
  scanf("%d", &n);

  int* ptr = (int*) malloc(n * sizeof(int));

  n = n + 5;
  ptr = realloc (ptr, n * sizeof(int));

  int* p = ptr;

  printf("Enter Elements : ");
  for(int i = 1; i <= n; i++){
    scanf("%d", &(*p));
    p++;
  }
  p = ptr;
  printf("\n\n");
  for(int i = 1; i <= n; i++){
    printf("%d \n",*p);
    p++;
  }
  
  free(ptr);
  ptr = NULL;
  
  return 0;
}