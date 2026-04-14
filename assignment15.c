#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main() {
    int n, i;

    // Seed the random number generator
    srand(time(0));

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    printf("Generated pseudo-random numbers:\n");

    for (i = 0; i < n; i++) {
        int random = rand(); // generates number between 0 and RAND_MAX
        printf("%d\n", random);
    }

    return 0;
}
