#include <stdio.h>

/* * NOTE: LOOP DELAY IN C
 * Standard C does not have a built-in delay function. 
 * You must use the library that matches your Operating System.
 */

int main() {
    
    // --- APPROACH A: WINDOWS ---
    // #include <windows.h>  <-- You must include this at the top
    
    for(int i = 10; i > 0; i -= 2) {
        printf("%d \n", i);
        
        // Windows uses 'Sleep' (Capital S) and milliseconds
        // Sleep(1000);   <-- 1000 milliseconds = 1 second
    }


    // --- APPROACH B: LINUX / MAC ---
    // #include <unistd.h>   <-- You must include this at the top
    
    for(int i = 10; i > 0; i -= 2) {
        printf("%d \n", i);
        
        // Linux/Mac needs 'fflush' to force the text to show up immediately
        // fflush(stdout); 
        
        // Linux/Mac uses 'sleep' (lowercase s) and seconds
        // sleep(1);      <-- 1 second
    }

    printf("Will you love me as a friend \n");
    return 0;
}
