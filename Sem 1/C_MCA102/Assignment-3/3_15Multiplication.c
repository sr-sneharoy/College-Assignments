#include<stdio.h>

int main(){
	int r1 , c1 , r2 , c2;
  printf("Enter values for the First Matrix : \n");
	printf("Enter number of rows : ");
	scanf("%d", &r1);
	printf("Enter number of columns : ");
	scanf("%d",&c1);

  int arr1[r1][c1];

  printf("Enter Elements of First array :\n");
  for(int i = 0; i < r1; i++)
		for(int j = 0; j < c1; j++)
  		scanf("%d", &arr1[i][j]);

  printf("\nEnter values for the Second Matrix : \n");
	printf("Enter number of rows : ");
	scanf("%d", &r2);
	printf("Enter number of columns : ");
	scanf("%d",&c2);

  if(c1 != r2) {
    printf("Given Two matrices can't be multiplied.");
    return 0;
  }

  int arr2[r2][c2], ans[r1][c2];

	printf("Enter Elements of Second array :\n");
  for(int i = 0; i < r2; i++)
		for(int j = 0; j < c2; j++)
  		scanf("%d", &arr2[i][j]);


  for(int i = 0; i < r1; i++)
		for(int j = 0; j < c2; j++)
  		ans[i][j] = 0;

  for(int i = 0; i < r1; i++)
    for(int j = 0; j < c2; j++)
      for(int k = 0; k<c1; k++)
        ans[i][j] += arr1[i][k] * arr2[k][j];

  printf("\nAnswer : \n");

  for(int i = 0; i < r1; i++){
		for(int j = 0; j < c2; j++)
  		printf("%d  ", ans[i][j]);
    printf("\n");
  }
  
  
	return 0;

}