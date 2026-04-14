#include <stdio.h>

int main() {
    int num, original, remainder;
    int result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }

    if(result == original)
        printf("\n%d is an Armstrong number", original);
    else
        printf("\n%d is NOT an Armstrong number", original);

    return 0;
}
