#include<stdio.h>
#include<string.h>

  typedef struct complex{
    float real;
    float imag;
  } complex;


complex add(complex c1, complex c2) {
  complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}


complex subtract(complex c1, complex c2) {
  complex result;
  result.real = c1.real - c2.real;
  result.imag = c1.imag - c2.imag;
  return result;
}

int main(){
  complex c1, c2, sum, diff;

  printf("Enter the real and imaginary part of the first complex number:\n");
  scanf("%f %f", &c1.real, &c1.imag);


  printf("Enter the real and imaginary part of the second complex number:\n");
  scanf("%f %f", &c2.real, &c2.imag);


  sum = add(c1, c2);
  diff = subtract(c1, c2);


  printf("\nResult of Addition: %.2f + %.2fi\n", sum.real, sum.imag);
  printf("Result of Subtraction: %.2f + %.2fi\n", diff.real, diff.imag);


  return 0;
}