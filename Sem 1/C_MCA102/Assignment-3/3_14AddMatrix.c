#include<stdio.h>
int main(){
  int r, c, sum = 0;
  printf("Enter number of row : ");
  scanf("%d", &r);
  printf("Enter number of column : ");
  scanf("%d", &c);

  int arr[r][c];
  printf("Enter elements for array : \n");
  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      scanf("%d", &arr[i][j]);

  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      sum += arr[i][j];

  printf("Answer : %d", sum);
  
  return 0;
}