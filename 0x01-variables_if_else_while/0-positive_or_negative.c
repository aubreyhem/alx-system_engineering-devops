#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    int n;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;

    // Print the random number
    printf("The number: %d\n", n);

    // Check if the number is positive, zero, or negative
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

