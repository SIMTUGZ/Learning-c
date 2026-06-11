/*
=====================================================
            STRING ARRAY IN C (COMPLETE NOTE)
=====================================================

Definition:
A string array is an array that stores multiple strings.
In C, a string is a character array terminated by '\0'.

Syntax:
    char array_name[number_of_strings][max_length];

Example:
    char names[4][30];

Meaning:
    4  -> Number of strings (rows)
    30 -> Maximum characters per string
          (29 characters + '\0')

Why use fgets() instead of scanf("%s")?

scanf("%s", name);
- Stops reading at the first space.
- "John Doe" becomes only "John".

fgets(name, sizeof(name), stdin);
- Reads the entire line.
- Accepts spaces.
- Safer because it limits the number of characters read.

=====================================================
                    EXAMPLE PROGRAM
=====================================================
*/

#include <stdio.h>
#include <string.h>

int main() {

    // String array capable of storing 4 names
    char names[4][30] = {0};

    // Calculate total rows automatically
    int rows = sizeof(names) / sizeof(names[0]);

    /*
        sizeof(names)
        = Total size of the whole array

        sizeof(names[0])
        = Size of one row

        rows = Total rows
    */

    // Input names
    for (int i = 0; i < rows; i++) {

        printf("Input names[%d]: ", i);

        // Read an entire line including spaces
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove the newline '\n' added by fgets
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Display stored names
    printf("\nStored Names:\n");

    for (int i = 0; i < rows; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    // Accessing specific strings
    printf("\nFirst String : %s\n", names[0]);

    // Accessing specific characters
    printf("First Character of First String : %c\n", names[0][0]);

    return 0;
}

/*
=====================================================
                SAMPLE INPUT
=====================================================

Input names[0]: John Doe
Input names[1]: Mary Jane
Input names[2]: Alex Cruz
Input names[3]: Peter Parker

=====================================================
                SAMPLE OUTPUT
=====================================================

Stored Names:
names[0] = John Doe
names[1] = Mary Jane
names[2] = Alex Cruz
names[3] = Peter Parker

First String : John Doe
First Character of First String : J

=====================================================
                    QUICK REVIEW
=====================================================

char name[] = "John";
-> Stores one string.

char names[4][30];
-> Stores 4 strings.
-> Each string can store up to 29 characters.

names[0]
-> First string.

names[1]
-> Second string.

names[0][0]
-> First character of first string.

names[0][2]
-> Third character of first string.

fgets(names[i], sizeof(names[i]), stdin);
-> Reads a complete string safely.

strcspn(names[i], "\n");
-> Finds the newline position.

names[i][strcspn(names[i], "\n")] = '\0';
-> Removes the newline added by fgets().

%s
-> Print a string.

%c
-> Print a character.

=====================================================
*/
