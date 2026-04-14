#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    float x, sum = 0;
    int sign = 1;  // alternates between + and -

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        sum += sign * (pow(x, j) / factorial(j));
        sign = -sign; // alternate sign
    }

    printf("Sum of sine series = %.5f\n", sum);

    return 0;
}
