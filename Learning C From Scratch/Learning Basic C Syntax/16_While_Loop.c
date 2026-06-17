#include <stdio.h>
#include <string.h>

/*
  ===========================================================================
  LOOP EXPLANATIONS IN C: WHILE vs. DO-WHILE
  ===========================================================================
  
  1. THE WHILE LOOP (Pre-test Loop)
     - Syntax: while (condition) { ... }
     - How it works: It checks the condition FIRST. If the condition is 
       true, it enters the loop. If it is false at the very start, the code 
       inside the loop NEVER runs (0 iterations).
     
  2. THE DO-WHILE LOOP (Post-test Loop)
     - Syntax: do { ... } while (condition);
     - How it works: It executes the code block FIRST, and then checks the 
       condition at the bottom. Because the check happens at the end, the 
       loop is guaranteed to run AT LEAST ONCE (minimum 1 iteration).
       *Crucial Note: Always put a semicolon (;) after the while condition!
  
  WHY CHOOSE DO-WHILE FOR INPUT VALIDATION?
  In your original code, you had to write the 'fgets' lines twice (once 
  before the loop, and once inside). A do-while loop fixes this duplication 
  because it forces the program to ask the user for input at least once 
  before checking if it's empty.
*/

int main() {
    char name[30];
    
    // Using a do-while loop to handle input and validation in one clean block
    do {
        printf("Input name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Cleans the trailing newline character
        
        // Inside the loop, we check if they gave an invalid (empty) input
        if (strlen(name) == 0) {
            printf("Invalid Input! "); 
            // The loop will now jump to the condition below, evaluate to true, 
            // and repeat the block.
        }
        
    } while (strlen(name) == 0); // Loop repeats AS LONG AS the name length is 0
    
    // Once the condition becomes false (length is greater than 0), it breaks out here:
    printf("Hello %s, welcome to C programming!\n", name);
    
    return 0;
}
