// Write a program that reads two 2D matrices from the console, verifies if metrics multiplication is possible or not. Then multiplies the matrices and prints the 3rd metrics.

#include<stdio.h>

int main(){
  int r1, c1, r2, c2;
    printf("Enter row and column of the 1st matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and column of the 2nd matrix : ");
    scanf("%d %d", &r2, &c2);
   
    if(c1!=r2) printf("Given two matrices can't be multiplied.");

    else if (c1==r2){
        int arr[r1][c1], brr[r2][c2], crr[r1][c2];
        printf("Enter the 1st matrix : \n");
        for(int i = 0; i < r1; i++)//Taking Inputs
            for(int j = 0; j < c1; j++) scanf("%d", &arr[i][j]);

        printf("\nEnter the 2nd matrix : \n");
        for(int i = 0; i < r2; i++)//Taking Inputs
            for(int j = 0; j < c2; j++) scanf("%d", &brr[i][j]);

        for(int i = 0; i < r1; i++)//Assume all element in result matrix is '0'
            for(int j = 0; j < c2; j++) crr[i][j]=0;

        for(int i = 0; i < r1; i++)
            for(int j = 0; j < c2; j++)
                for(int k = 0; k<c1; k++)
                    crr[i][j] = crr[i][j] + (arr[i][k] * brr[k][j]);

        printf("Result is : \n");
        for(int i = 0; i < r1; i++){//Print the result matrix
            for(int j = 0; j < c2; j++) printf("%d    ", crr[i][j]);
            printf("\n");
        }
    }

  return 0;
}