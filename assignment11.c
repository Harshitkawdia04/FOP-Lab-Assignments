#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    if (n < 0)
        return -1; // invalid
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void primeFactors(int n) {
    printf("Prime factors: ");
    
    if (n <= 1) {
        printf("None");
        return;
    }

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Square root
    if (num >= 0)
        printf("Square root: %.2f\n", sqrt(num));
    else
        printf("Square root: Not defined for negative numbers\n");

    // b) Square
    printf("Square: %d\n", num * num);

    // c) Cube
    printf("Cube: %d\n", num * num * num);

    // d) Prime check
    if (isPrime(num))
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    // e) Factorial
    long long fact = factorial(num);
    if (fact == -1)
        printf("Factorial: Not defined for negative numbers\n");
    else
        printf("Factorial: %lld\n", fact);

    // f) Prime factors
    primeFactors(num);

    return 0;
}
