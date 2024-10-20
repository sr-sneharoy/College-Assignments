#include<stdio.h>
int main(){
  int n;
  printf("Enter number of rows / columns : ");
  scanf("%d", &n);

  int arr[n][n], brr[n][n] , add[n][n], sub[n][n];
  printf("Enter elements for first array : \n");
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      scanf("%d", &arr[i][j]);

  printf("Enter elements for second array : \n");
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      scanf("%d", &brr[i][j]);

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      add[i][j] = arr[i][j] + brr[i][j];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      sub[i][j] = arr[i][j] - brr[i][j];

  printf("Result after Addition : \n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++)
      printf("%d   ", add[i][j]);
    printf("\n");
  }

  printf("\n\nResult after Subtraction  : \n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++)
      printf("%d   ", sub[i][j]);
    printf("\n");
  }
  
  return 0;
}