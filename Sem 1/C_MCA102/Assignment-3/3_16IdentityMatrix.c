#include<stdio.h>
int main(){
  int r, check = 0;
  printf("Enter number of row : ");
  scanf("%d", &r);

  int arr[r][r];
  printf("Enter elements for array : \n");
  for(int i = 0; i < r; i++)
    for(int j = 0; j < r; j++)
      scanf("%d", &arr[i][j]);

  for(int i = 0; i < r; i++){
    for(int j = 0; j < r; j++){
      if((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0)) {
        check++;
        break;
      }
    }
    if(check) break;
  }
   
  if(check) printf("Given Matrix is not Identity Matrix");
  else printf("Given Matrix is Identity Matrix");

  
  return 0;
}