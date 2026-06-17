#include<stdio.h>
#include<stdlib.h> //this is use for rand() and malloc();

//In malloc or memory allocation we pass number of bytes


int main(){
    
    // char grades[5] = {0}; //this is the basic strocture what if we dont know the user how much grade it have???
    
    int number = 0;
    
    printf("Input how many elements you want: ");
    scanf("%d",&number);
    
    char* grades = malloc(number* sizeof(char)); //we calculate how mucdata will be allocated pr bites
    
    // Stack // this on in pre build data using stact example int num = 8;
    // Heap //in malloc we barrow data here
    
    
    
    //Incase the this condation will fail grades = malloc(numberm* sizeof(char))
    //it will become NULL
    if(grades == NULL){ //this is important to avoid sigmentation fault
        printf("Error condition program Memory allocation FAIL\n");
        return 1;
    }
    
    //previosly in static array we do this
    
    // int size = sizeof(grades) / sizeof(grades[0]); 
    //this is not recommended if you are trying to get the size of the static array
    //that is pointer it will give you the address insted
    
    //the sulotion the user input element the number it will become the size
    for(int i = 0 ; i < number ; i++){
        printf("Input array of elements [%d]: ",i);
        scanf(" %c",&grades[i]);
    }
    
    for(int i = 0 ; i < number ; i++){
        printf("Grade:[%d]:%c \n",i,grades[i]);
    }
    
    
    
    
    //in a malloc() function is like barrowing some data and we need to return it after using it thats why we will need to use free funcition()
    
    free(grades); // returning the data that we barrow
    grades= NULL; //this will reset the data of the pointer //Avodi licking pointer
    
    return 0;
}

//malloc() = A function in c that find and store temporary data in memory
