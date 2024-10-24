// 5. Write a program that reads a 2D metrics and checks if the metrics is a symmetric metrics or not.


#include<stdio.h>

int main(){
  int n, check = 1 ;
  printf("Enter number of row / column : ");
  scanf("%d", &n);
  
  int arr[n][n];
  printf("Enter elements for array : \n");
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      scanf("%d", &arr[i][j]);

  for(int i = 0; i < n; i++)
    for(int j = i; j < n; j++)
      if(arr[i][j] != arr[j][i]) {
        check = 0;
        break;
      }

  if(check) printf("The given Matrix is symmetric.");
  else printf("Not Symmetric.");

  return 0;

}
