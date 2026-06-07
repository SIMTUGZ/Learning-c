// This is example of multiple input Array

// int array[5] = {0};  this example of array with element zero

#include<stdio.h>

void OddEven();// Prototype Function 

int main(){
    
    // int size[5];  we can initialize the size of the elements of the array
    int size;
    
    printf("Input size: ");
    scanf("%d", &size);
    
    int array[size]; //array and size logic user will input the size of the array
    
    for(int i = 0; i < size ; i++){ // this will initialize the loop 
        printf("Input number: ");
        scanf("%d",&array[i]);
    }
    
    OddEven(array,size);
    
    
    return 0;
}

void OddEven(int array[] , int size){
    
    for(int i = 0; i < size ; i++){ 
        if(array[i] % 2 == 0){
            printf("%d even \n",array[i]);
        }else{
            printf("%d odd \n",array[i]);
        }
    }
    
    
}
