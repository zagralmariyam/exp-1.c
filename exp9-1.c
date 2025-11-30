/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

#include <stdio.h>
#include <string.h>

// Define the student_record structure
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    // Declare an array of 5 student_record structures
    struct student_record students[5];
    int i;

    // Read data for 5 students from the user
    printf("Enter data for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name); // Reads a single word for name
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter total marks: ");
        scanf("%f", &students[i].total_marks);
    }

    // Find the topper
    struct student_record topper = students[0]; // Initialize topper with the first student
    for (i = 1; i < 5; i++) {
        if (students[i].total_marks > topper.total_marks) {
            topper = students[i]; // Update topper if a student has higher marks
        }
    }

    // Display the topper's information
    printf("\n--- Topper Is ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_number);
    printf("Total Marks: %.2f\n", topper.total_marks);

    return 0;
}