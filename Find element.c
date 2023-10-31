#include <stdio.h>

int main() {
    int n = 15; // The term we want to find
    int odd_term = 0, even_term = 0;

    // Loop through the terms up to the 15th term
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Odd term: Increment by 7
            odd_term += 7;
        } else {
            // Even term: Increment by 6
            even_term += 6;
        }
    }

    // Print the 15th term
    if (n % 2 == 1) {
        printf("The 15th term of the series is: %d (Odd term)\n", odd_term);
    } else {
        printf("The 15th term of the series is: %d (Even term)\n", even_term);
    }

    return 0;
}
