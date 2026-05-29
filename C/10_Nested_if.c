//Nested IF

/*

if (condition1) {
    if (condition2) {
        // code runs if BOTH conditions are true
    }
}

*/

//My example code for Nested if

#include<stdio.h>

int main(){
    int age;
    printf("Input age: ");
    scanf("%d",&age);


    if(age > 0){      //if 
        if(age >= 60){ //if inside of a if 
            printf("You are senior citizen, you are eligible to vote",age);
            
        }else if(age <= 17){
            printf("You are %d years old not eligible to vote",age);
            
        }else if(age >= 18){
            printf("You are %d now eligible to vote",age);
        }
        
    }else{
        printf("invalid");
    }
    
    
    
    return 0; 
}