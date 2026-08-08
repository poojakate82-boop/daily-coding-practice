#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",
          &marks1, &marks2, &marks3, &marks4, &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade = A+\n");
    else if (percentage >= 80)
        printf("Grade = A\n");
    else if (percentage >= 70)
        printf("Grade = B\n");
    else if (percentage >= 60)
        printf("Grade = C\n");
    else
        printf("Grade = Fail\n");

    return 0;
}