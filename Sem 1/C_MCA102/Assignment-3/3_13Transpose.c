#include<stdio.h>
int main(){
  int r, c;
  printf("Enter number of row : ");
  scanf("%d", &r);
  printf("Enter number of column : ");
  scanf("%d", &c);

  int arr[r][c];
  printf("Enter elements for array : \n");
  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      scanf("%d", &arr[i][j]);

  printf("\nTranspose: \n");
  for(int i = 0; i < c; i++){
    for(int j = 0; j < r; j++)
      printf("%d   ", arr[j][i]);
    printf("\n");
  }

  
  return 0;
}