//19. Write a C program to input any alphabet and check whether it is a vowel or consonant.

#include<stdio.h>

int main(){
  char ch;
  printf("Enter a character : ");
  scanf("%c", &ch);
  if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
      printf("%c is a vowel.", ch);
    else printf("%c is a consonant.", ch);
  }
  else printf("%c is not an Alphabet.", ch);

  return 0;
}