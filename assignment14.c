#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;  // get last digit

        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number.\n");
            return 0;
        }

        decimal += remainder * pow(2, i); // calculate decimal value
        binary /= 10;  // remove last digit
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
