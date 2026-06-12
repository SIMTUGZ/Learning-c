#include <stdio.h>
#include <string.h>

/*
========================
STRUCT (Structure) NOTES
========================

What is a struct?
- A struct is a user-defined data type.
- It groups related variables into one container.
- A struct can store different data types together.

Syntax:

struct StructureName{
    data_type variable1;
    data_type variable2;
};

Example:
*/

struct User{
    int age;
    char name[30];
    float gpa;
};

int main(){

    // Create a structure variable
    struct User User1;

    /*
    Accessing members:
    structureVariable.member
    */

    printf("Input name: ");
    fgets(User1.name, sizeof(User1.name), stdin);

    User1.age = 19;
    User1.gpa = 3.50;

    printf("\nUser Information\n");
    printf("Name: %s", User1.name);
    printf("Age: %d\n", User1.age);
    printf("GPA: %.2f\n", User1.gpa);

    /*
    String assignment:
    Use strcpy() because strings cannot
    be assigned directly with =

    Example:
    strcpy(User1.name, "John");
    */

    strcpy(User1.name, "John");

    printf("\nUpdated Name: %s\n", User1.name);

    return 0;
}

/*
SUMMARY

struct
- Groups related data into one container.
- Can contain int, float, char, arrays, etc.
- Members are accessed using the dot (.) operator.

Example:
User1.age
User1.name
User1.gpa

Use struct when multiple variables belong
to the same object or record.
*/
