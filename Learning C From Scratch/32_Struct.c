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



Aditional Information example


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct{ // we can use typedef to make the code less messy
    char name[100];
    int age;
    float gpa;
    bool isWorker;
}Worker;

void StringPrint(Worker person1);// Prototype funcion

int main(){
    
    Worker person1 = {"jersim",19,1.0,true};
    Worker person2 = {"Tugonon",19,3.0,false};
    
    printf("name: %s \n",person1.name);
    printf("name: %s \n",person2.name);
    printf("age: %d \n",person1.age);
    printf("age: %d \n",person2.age);
    
    person1.isWorker == 1? printf("true\n") : printf("false\n");
    person2.isWorker == 1? printf("true\n") : printf("false\n");
    
    printf("%.1f \n",person1.gpa);
    printf("%.1f \n",person2.gpa);
    
    
    // manual adding data in the code
    
    //string using string copy or strcpy
    strcpy(person1.name,"this is me \n");
    printf("%s",person1.name);
    
    //adding data type in c be like
    person2.age = 12;
    printf("person2 age: %d",person2.age);
    
    
    StringPrint( person1); // transfer in the other fuction
    
    return 0;
}


void StringPrint(Worker person1){ //fuction
    printf("name: %s \n",person1.name);
    printf("age: %d \n",person1.age);
}
