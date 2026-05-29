#include<stdio.h>

int main(){
    
    // Conditional Statement Flow
    if(condition1) { 
        // 1. The program checks this first. If true, it runs this code and skips everything else.
        
    } else if(condition2) { 
        // 2. The program ONLY looks here if condition1 was false. 
        //    If condition2 is true, it runs this and skips the rest.
        
    } else { 
        // 3. The "catch-all". This only runs if BOTH condition1 and condition2 were false.
        //    It doesn't need its own condition because it's the backup plan.
    } 
    
    return 0;
}