#include<stdio.h>

int OddEven(int array[] , int size); // this is a Prototype Function

// this is use to make the program organize  insted bottom to up it become up to bottom 
// to make it more organize


int main(){
    
    int number = 0, size = 0;
    
    printf("Input size: ");
    scanf("%d",&size);
    
    int array[size];
    for(int i = 0 ; i < size; i++){
        
        printf("Input number: ");
        scanf("%d",& array[i]);

    }
    
    OddEven(array, size);
    
    return 0;
}

int OddEven(int array[] , int size){
    
    for(int i = 0 ; i < size; i++){
        if(array[i] % 2 == 0){
            printf("even \t");
        }else{
            printf("odd \t");
        }
    }
    
}




