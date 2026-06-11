#include <stdio.h>

// GLOBAL SCOPE
// This variable is declared outside of all functions.
// It can be accessed and modified by ANY function below it.
int global_modifier = 2;  //this is example of global scope

int add(int x, int y){
    // LOCAL SCOPE (inside add)
    int result = (x + y) * global_modifier; // Uses the global variable
    return result;
}

int subtract(int x, int y){
    // LOCAL SCOPE (inside subtract)
    int result = (x - y) * global_modifier; // Uses the global variable
    return result;
}

int main(){
    // LOCAL SCOPE (inside main)
    int x = 5; 
    int y = 6; 

    int result = add(x, y);

    printf("Result: %d\n", result); // Outputs 22 -> (5 + 6) * 2

    return 0;
}
