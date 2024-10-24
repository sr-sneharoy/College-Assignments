//1. Write a C program to read a 2D array (with most of the elements as 0s) and then represent the same array as Sparse Metrics. 

// In Sparse Matrix representation we show non-zero elements only
// Triplet Representation =>  

#include<stdio.h>

int main(){
  int r, c, zeroCount = 0, count = 0;
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
    for(int j = 0; j < c; j++){
      if(arr[i][j] == 0) zeroCount++;
      else count++;
    }
  
  if(zeroCount > count) {
    int ans[3][count], iCol = 0;
    for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++){
      if(arr[i][j] != 0) {
        ans[0][iCol] = i;
        ans[1][iCol] = j;
        ans[2][iCol] = arr[i][j];
        iCol++;
      }
    }

    printf("\n\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < count; j++)
      printf("%d   ", ans[i][j]);
      printf("\n");
  }
  }


  else printf("Not A Sparse Matrix"); 
  return 0;
}