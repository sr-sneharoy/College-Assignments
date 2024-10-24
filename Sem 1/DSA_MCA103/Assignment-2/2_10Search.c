//10. Write a C program to search an element in an Array using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, key, check = 0;
  printf("Enter number of elements you want : ");
  scanf("%d", &n);

  int* ptr = (int*) malloc(n * sizeof(int));

  int* p = ptr;

  printf("Enter Elements : ");
  for(int i = 1; i <= n; i++){
    scanf("%d", &(*p));
    p++;
  }

  printf("Enter the element you want to search : ");
  scanf("%d", &key);
  p = ptr;
  printf("\n\n");
  for(int i = 1; i <= n; i++){
    if(key == *p){
      check = 1;
      break;
    }
    p++;
  }
  
  free(ptr);
  ptr = NULL;

  if(check) printf("The Given Element Exist");
  else printf("The Given Element Exist");
  
  return 0;
}