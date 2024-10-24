//  Write a C program to convert temperature from degree Centigrade to Fahrenheit.

#include <stdio.h>

int main(){

  float temp;

  printf("Enter temperature in Centigrade : ");
  scanf("%f", &temp);
  printf("Temperature in Fahrenheit : %f", ((temp * 9/5) + 32));

  return 0;
}