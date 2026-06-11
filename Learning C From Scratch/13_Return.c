#include <stdio.h>
#include <string.h>

// RETURN IN C
// return sends a value back to where the function was called.
// It is commonly used to return a result from a function.
//
// IMPORTANT:
// The return type in the function declaration must match
// the value being returned.
// int    -> integer
// char   -> character
// double -> decimal number
// bool   -> true or false
//
// PROGRAMMING TIP:
// A function should do one specific task and do it well.
// Avoid making a function do multiple unrelated tasks.

// This function checks if two passwords are the same.
int check_access(char pass[], char p[]) {

    // strcmp() returns 0 when both strings match.
    if (strcmp(pass, p) == 0) {
        return 1;   // Password is correct
    } else {
        return 0;   // Password is incorrect
    }
}

int main() {

    char pass[30];
    char p[30];

    printf("Create password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    printf("\nInput password: ");
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0';

    // The value returned by check_access()
    // is stored in the variable GD.
    int GD = check_access(pass, p);

    // GD contains:
    // 1 = Access granted
    // 0 = Access denied
    switch (GD) {

        case 1:
            printf("good");
            break;

        case 0:
            printf("Invalid");
            break;
    }

    return 0;
}
