//6. Write a program to display n number of elements. Memory should be allocated dynamically using calloc().

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Enter number of elements you want : ");
  scanf("%d", &n);

  int* ptr = (int*) calloc(n , sizeof(int));

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