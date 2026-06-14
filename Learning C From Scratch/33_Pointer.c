//the pointer is use to pass data in the address insted creating a new brach it will make the code 

#include<stdio.h>

int main(){
    
    int number = 0;
    
    int* ptr = &number;
    
    // this is example address locating and getting data
    
    printf("Direct data value: %d \n",number);
    printf("It will give the data location: %p \n",&number);
    printf("It will give the data location: %p \n",&number);
    printf("We print address: %d \n",ptr);//this is base 10 format of data
    printf("We print address: %d \n",&ptr);
    printf("It will print the pointed data: %d \n",*ptr);
    
    int* p = &*ptr; //this is example trasfering data pointer to pointer
    
    
    
    return 0;
}
