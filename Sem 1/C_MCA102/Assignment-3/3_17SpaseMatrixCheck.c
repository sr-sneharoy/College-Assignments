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
   
  if(zeroCount > count) printf("Given Matrix is Sparse Matrix");
  else printf("Given Matrix is not Sparse Matrix");

  
  return 0;
}