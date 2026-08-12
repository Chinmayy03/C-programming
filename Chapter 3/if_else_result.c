#include <stdio.h>

int main() {
    int score = 85; // The student's score

    if (score >= 90) {
        printf("Grade: A\n"); // Runs if score is 90 or higher
    } 
    else if (score >= 80) {
        printf("Grade: B\n"); // Runs if score is between 80 and 89
    } 
    else if (score >= 70) {
        printf("Grade: C\n"); // Runs if score is between 70 and 79
    } 
    else {
        printf("Grade: F\n"); // Runs if score is below 70
    }

    return 0;
}
