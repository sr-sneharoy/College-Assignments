#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
};

// Function to display student details
void displayDetails(struct student s[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s", s[i].name);
        printf("Address: %s", s[i].address);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

int main() {
    struct student bctClass[12];  

    // Reading details of 12 students
    for (int i = 0; i < 12; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &bctClass[i].rollNo);
        getchar();  // To consume the newline character after entering Roll No

        printf("Name: ");
        fgets(bctClass[i].name, sizeof(bctClass[i].name), stdin);  

        printf("Address: ");
        fgets(bctClass[i].address, sizeof(bctClass[i].address), stdin);  

        printf("Age: ");
        scanf("%d", &bctClass[i].age);

        printf("Marks: ");
        scanf("%f", &bctClass[i].marks);

        getchar();  // To consume the newline character after entering marks
        printf("\n");
    }

    // Displaying student details
    displayDetails(bctClass, 12);

    return 0;
}
