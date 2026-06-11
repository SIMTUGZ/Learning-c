#include <stdio.h>

/*
  ===========================================================================
  MASTERING THE FOR LOOP IN C
  ===========================================================================
  
  WHAT IS A FOR LOOP?
  A 'for' loop is a counter-controlled loop. Use it when you know EXACTLY 
  how many times you want to repeat a block of code before the loop even starts.

  THE 3-PART STRUCTURE:
  for ( 1. Initialization ; 2. Condition ; 3. Update ) {
      // 4. Code Block (Body)
  }

  HOW THE FLOW LOGIC WORKS STEP-BY-STEP:
  Step 1: Run the INITIALIZATION once at the very start.
  Step 2: Check the CONDITION. 
          - If True -> Run the Code Block (Body).
          - If False -> Exit the loop entirely.
  Step 3: Run the UPDATE statement (after the body finishes).
  Step 4: Jump back to Step 2 and check the condition again.
*/

int main() {
    
    printf("=== [1] FORWARD FOR LOOP (Increment) ===\n");
    /*
       - Starts at i = 0 (Initialization)
       - Runs as long as i is less than 5 (Condition)
       - Adds 1 to i after every round (Update: i++)
    */
    for (int i = 0; i < 5; i++) {
        printf("Forward index i = %d\n", i);
    }
    printf("\n");


    printf("=== [2] BACKWARD FOR LOOP (Decrement) ===\n");
    /*
       - Starts at i = 5 (Initialization)
       - Runs as long as i is greater than 0 (Condition)
       - Subtracts 1 from i after every round (Update: i--)
    */
    for (int i = 5; i > 0; i--) {
        printf("Backward index i = %d\n", i);
    }
    printf("\n");


    printf("=== [3] THE CRUCIAL SEMICOLON TRAP ===\n");
    /*
       WARNING: Putting a semicolon right after the 'for' statement 
       creates an EMPTY loop. The loop will spin by itself until the 
       condition becomes false, completely skipping the code below it.
       
       Also note: 'j' must be declared OUTSIDE the loop if you want to 
       print its final value after the loop finishes.
    */
    int j;
    for (j = 0; j < 3; j++); // <--- This semicolon breaks the link to the block below!
    {
        printf("This only prints ONCE after loop finishes. Final j = %d\n", j);
    }
    printf("\n");

    // Your custom message
    printf("Will you love me as a friend? \n");

    return 0;
}
