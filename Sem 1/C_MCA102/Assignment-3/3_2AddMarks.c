// 2. Write a program in C that stores the marks of the subject Mathematics and English of n number of students in an array and then prints their total marks. 

#include <stdio.h>

int main() {
  int n; 
  printf("Enter the number of students: ");
  scanf("%d", &n);

  int mathMarks[n];
  int englishMarks[n];
  int totalMarks[n];

  // Input marks for each student
  for (int i = 0; i < n; i++) {
      printf("Enter marks for Student %d\n", i + 1);
      printf("Mathematics: ");
      scanf("%d", &mathMarks[i]);
      printf("English: ");
      scanf("%d", &englishMarks[i]);

      totalMarks[i] = mathMarks[i] + englishMarks[i];
  }

  // Print total marks for each student
  printf("\nTotal Marks of Students:\n");
  for (int i = 0; i < n; i++) {
      printf("Student %d: %d\n", i + 1, totalMarks[i]);
  }

  return 0;
}
