//Enum means Enumeration

// An enum is a custom data type used to replace confusing numbers in your code with
// easy-to-read, named integer constants (like replacing 0 and 1 with OFF and ON).

#include<stdio.h>

typedef enum{
    
    MONDAY, TUESDAY, WENDSDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY //this is the proper way to write this Big 
    
}DAY;

enum Day{
    //This words represent a constant number like a array start in 0
//  [0]      [1]       [2]         [3]        [3]       [4]            [5]
    Monday, Tuesday, Wendsday, Thursday,   Friday,    Saturday,     Sunday
    //We can put value on it manualy example Monday = 1 now the value cahage
};

int main(){
    
    enum Day Date = Tuesday; //this one we need to add enum because we dont use typedef in the command to represent Day ass enum
    printf("%d \n",Date);
    
    DAY DATE = TUESDAY; //this use typedef thats why we 
    printf("%d \n",DATE);
 
    
    return 0;
}


//Example code
/*
    #include<stdio.h>

enum Sicurity{
    GOOD = 1 , BAD = 0
};

int main(){
    
    enum Sicurity UserInput = GOOD;
    
    switch(UserInput){
        
        case 1:
            printf("Good");
            break;
        case 0:
            printf("Bad");
            break;
        default:
            printf("Invalid Input");
            break;
        
    }
    return 0;
}
*/
