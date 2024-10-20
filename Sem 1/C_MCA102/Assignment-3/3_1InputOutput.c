// 1. Write a program to store marks for n number of student in an array and print their marks

#include<stdio.h>

int main(){
  int arr[100];
  int n;
  printf("Enter total number of students : ");
  scanf("%d",&n);

  printf("Enter marks of each student : \n");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("\nEntered marks are : \n");
  for (int i = 0; i < n; i++)
    printf("Student %d  => %d \n", i + 1, arr[i]);

  return 0;
}