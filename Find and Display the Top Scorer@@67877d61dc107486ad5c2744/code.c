#include <stdio.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], topScorer;
    
    // Input first student and assume as top scorer initially
    scanf("%d %s %f", &students[0].rollNumber, students[0].name, &students[0].marks);
    topScorer = students[0];

    // Input remaining students and find the top scorer
    for (int i = 1; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks > topScorer.marks) {
            topScorer = students[i];
        }
    }

    // Display the top scorer details
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", topScorer.rollNumber, topScorer.name, topScorer.marks);

    return 0;
}
