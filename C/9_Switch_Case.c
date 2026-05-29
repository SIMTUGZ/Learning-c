//Switch case

#include <stdio.h>

int main() {
    // The switch variable can be an integer (int) or a character (char)
    int var = 1; 

    // The switch statement evaluates the expression inside the parentheses
    switch (var) { 
        
        case 1:
            printf("Case 1 selected.\n");
            break; // 'break' exits the switch. Without it, execution "falls through" to the next case.
        
        case 2:
            printf("Case 2 selected.\n");
            break;

        case 3: 
            printf("Case 3 selected.\n");
            break;
        
        default: 
            // Executes only if 'var' does not match any of the cases above
            printf("Default case selected.\n");
            break; // Optional but good practice
    }

    return 0;
}
