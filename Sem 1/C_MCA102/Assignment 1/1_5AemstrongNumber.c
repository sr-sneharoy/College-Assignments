//5. Write a C program to check whether a given number is an Armstrong number or not.

#include <stdio.h>

int main() {
    printf("\n\n***Program to check whether a given number is an Armstrong number or not.***\n");
    printf("Name: Sneha Roy, Class MCA1B, Roll-48 \n \n");

    int num, sum = 0, remainder, digitCount = 0, n;
    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    while (n != 0) {
        n = n / 10;
        digitCount++;
    }

    n = num;
    while (n != 0) {
        remainder = n % 10;
        int power = 1;
        for (int i = 0; i < digitCount; i++) {
            power *= remainder;
        }
        sum += power;
        n /= 10;
    }

    if (num == sum) 
        printf("%d is an Armstrong Number.\n", num);
    else 
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}
