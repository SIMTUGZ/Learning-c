#include<stdio.h>

// A Array is a multiple collection of elements just like a varaiable but it can store more

int main(){
    
    //basic example of Array
    // 0  1  2   3   4  this is call elements // 0  1  2  3   4  <- These are called "indexes" (the positions)
    int numbers[] = {10 ,9 ,8 ,7 , 6};  //this is example of 1D Array
    char ch[] = {'A','B','C','D'};
    char name[] = "SIMTUGZ"; //this string is a array of character each character is represent as a element
    
    int size = sizeof(numbers);// sizeof command it will count how many elements of the array or how many bites in the array 
    
    printf("%d \n",size); 
    
    
    printf("%d \n",numbers[3]);
    printf("%c \n",ch[3]);
    printf("%c \n",name[3]);
    
    //ok now lets try to use loops 
    
    for(int i = 0 ; i < 5; i++){
        printf("%d ", numbers[i]); //this will update the loop 
    }
    
    return 0;
}
