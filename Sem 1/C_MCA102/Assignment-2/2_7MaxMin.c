//7. Using functions, write a C program to find the maximum and minimum between two numbers.

#include<stdio.h>

int max(int a, int b){
 if(a > b) return a;
 else return b;
}
int min(int a, int b){
 if(a < b) return a;
 else return b;
}

int main(){

  int a , b;
  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);

  printf("Maximum : %d\n", max(a,b));
  printf("Minimum : %d", min(a,b));


  return 0;
}