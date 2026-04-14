#include <stdio.h>

// Function for factorial
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function for power (x^y)
int power(int x, int y) {
    int i, result = 1;
    for(i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int choice;
    float a, b;
    int n, x, y;

    printf("----- Simple Calculator -----\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error! Division by zero");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d", power(x, y));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            printf("Result = %d", factorial(n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
