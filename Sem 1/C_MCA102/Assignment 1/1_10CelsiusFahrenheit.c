// 10. Write a program to convert temperatures in Celsius to Fahrenheit and vice-versa.

#include <stdio.h>

int main(){

  int choice;
  float temp;

  printf("Press 1 to convert Celsius to Fahrenheit : \n");
  printf("Press 2 to convert Fahrenheit to Celsius : \n");
  printf("Enter your choice : ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Enter temperature in Celsius : ");
    scanf("%f", &temp);
    printf("Temperature in Fahrenheit : %f", ((temp * 9/5) + 32));
    break;
  case 2:
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &temp);
    printf("Temperature in Celsius : %f", ((temp - 32) * 5/9));
    break;
  
  default: printf("Invalid choice");
  }

  return 0;
}