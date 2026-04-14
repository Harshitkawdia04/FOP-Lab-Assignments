#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original for reference

    while (num != 0) {
        remainder = num % 10;          // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                // remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
