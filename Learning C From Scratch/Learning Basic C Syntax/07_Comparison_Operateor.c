#include <stdio.h>

int main() {
    // Defining two variables to compare
    int a = 12;
    int b = 25;
    int result;

    printf("Initial values: a = %d, b = %d\n\n", a, b);
    printf("--- Remember: 1 means TRUE and 0 means FALSE in C ---\n\n");

    // 1. Equal to (==)
    // Checks if the left side is exactly equal to the right side
    result = (a == b); 
    printf("Is 'a' equal to 'b'? (a == b) \nResult: %d (False, because 12 is not 25)\n\n", result);

    // 2. Not equal to (!=)
    // Checks if the left side is different from the right side
    result = (a != b);
    printf("Is 'a' not equal to 'b'? (a != b) \nResult: %d (True, because 12 is different from 25)\n\n", result);

    // 3. Greater than (>)
    // Checks if the left side is strictly strictly larger than the right side
    result = (a > b);
    printf("Is 'a' greater than 'b'? (a > b) \nResult: %d (False, because 12 is not greater than 25)\n\n", result);

    // 4. Less than (<)
    // Checks if the left side is strictly smaller than the right side
    result = (a < b);
    printf("Is 'a' less than 'b'? (a < b) \nResult: %d (True, because 12 is smaller than 25)\n\n", result);

    // 5. Greater than or equal to (>=)
    // Checks if the left side is either larger than OR exactly equal to the right side
    result = (a >= 12); // Comparing 'a' (12) with the number 12
    printf("Is 'a' greater than or equal to 12? (a >= 12) \nResult: %d (True, because 12 equals 12)\n\n", result);

    // 6. Less than or equal to (<=)
    // Checks if the left side is either smaller than OR exactly equal to the right side
    result = (b <= 20); // Comparing 'b' (25) with the number 20
    printf("Is 'b' less than or equal to 20? (b <= 20) \nResult: %d (False, because 25 is larger than 20)\n\n", result);


    // --- Practical Example using an 'if-else' statement ---
    printf("--- Practical Scenario ---\n");
    
    // The comparison operator inside the if-statement evaluates to 1 (true) or 0 (false)
    if (a < b) {
        // This block runs because (12 < 25) is true (1)
        printf("Condition met: 'a' is smaller than 'b'.\n");
    } else {
        printf("Condition not met: 'a' is not smaller than 'b'.\n");
    }

    return 0;
}
