#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i, pass = 1;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);

        if(marks[i] < 40) {
            pass = 0;  // fail condition
        }

        total += marks[i];
    }

    if(pass == 0) {
        printf("\nResult: FAIL");
    } else {
        percentage = total / 5;
        printf("\nTotal = %.2f", total);
        printf("\nPercentage = %.2f", percentage);

        // Grade classification
        if(percentage >= 75)
            printf("\nGrade: Distinction");
        else if(percentage >= 60)
            printf("\nGrade: First Division");
        else if(percentage >= 50)
            printf("\nGrade: Second Division");
        else
            printf("\nGrade: Third Division");
    }

    return 0;
}
