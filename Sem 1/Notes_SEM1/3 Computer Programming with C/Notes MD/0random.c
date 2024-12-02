#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "Hello World!";
  char *result = strchr(str, 'H');
  printf("%d",result);
}