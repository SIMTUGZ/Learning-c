//Ternary Operator in C

/*
Syntax:  condition ? expression1 : expression2;
*/

//tenary operator is like if and else statement but one line 


#include<stdio.h>

int main(){
    
    int number = 0;
    int *ptr = &number; // i use pointer in this one 
    
    
    printf("Input number: "); // I put the condition of the code here to make the program small
    scanf("%d",&*ptr),*ptr % 2 == 0? printf("%d is even",*ptr): printf("%d is odd",*ptr);
    
    return 0;
}
