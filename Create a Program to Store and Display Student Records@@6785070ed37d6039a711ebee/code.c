#include <stdio.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Take the number of students as input
    
    scanf("%d", &n);

    struct Student students[n]; // Array of structures

    // Input student details
    for (int i = 0; i < n; i++) {
      
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Display student details

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
