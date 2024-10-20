// 6. Write a program to input a binary number in an array and convert it into a corresponding decimal number.



#include <stdio.h>
#include<string.h>

int binaryToDecimal(int arr[], int n){
  int ans = 0;
  for(int i = 0; i < n; i++){
    ans = ans * 2 + arr[i];
  }
  return ans;
}

int noOfDigit(int n){
  int count = 0;
  while(n){
    count++;
    n /= 2;
  }
  return count;
}
int main(){
  char str[33];
  printf("Enter a binary number : ");
  scanf("%s", str);
  
  int n = strlen(str), arr[n];
  for(int i = 0; i < n; i++){
      arr[i] = str[i] - '0';
  }

  int ans = binaryToDecimal(arr, n);

  printf("Answer :  %d", ans);

  return 0;
}