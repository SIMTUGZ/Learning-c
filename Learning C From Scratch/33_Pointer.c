//the pointer is use to pass data in the address insted creating a new brach it will make the code 

// int * this * is dreference operator 
// int* var = &var this is &address locating and


#include<stdio.h>

int main(){
    
    int number = 0;
    
    int* ptr = &number;
    
    // this is example address locating and getting data
    
    printf("Direct data value: %d \n",number);
    printf("It will give the data location: %p \n",&number);
    printf("It will give the data location: %p \n",&number); //hexadecimal address this is recommended one base 16
    printf("We print address: %d \n",ptr);//this is base 10 format of data ok but in base 10 address format
    printf("We print address: %d \n",&ptr);
    printf("It will print the pointed data: %d \n",*ptr);
    
    int* p = &*ptr; //this is example trasfering data pointer to pointer

    return 0;
}



 //example code

    #include<stdio.h>

void Main(int* Age);


int main(int* Age){
        int age = 0;
        int* pAge = &age;
        
        printf("Input age: ");
        scanf("%d",&age);
        
        Main(pAge); //same logic
        
        printf("%d",*pAge); //this one no need to use for return
        
    
    return 0;
}

void Main(int* Age){
    (*Age)++; // you need to close the pointer before you add operation
    
    
}


//Additional code example

#include<stdio.h>

void OddEven(int* ptrNum);

int main(){
    
    int number = 0;
    int* ptrNum = &number;
    
    printf("Input number: ");
    scanf("%d",&number);
    
    OddEven(ptrNum);
    
    return 0;
}


void OddEven(int* ptrNum){
    
    if((*ptrNum) % 2 == 0){
        printf("Even %d \n",*ptrNum);
        
    }else{
        printf("odd");
    }
}


//Total average example in pointer

#include<stdio.h>

void Average(int* ptrSize , int* ptrArray);

int main(){
    
    int size;
    int* ptrSize = &size;
    
    
    printf("Input size: ");
    scanf("%d",&size); // input to size
    
    int array[size];
    int* ptrArray = array;
    
    for(int i = 0; i < *ptrSize; i++){
        printf("Input number: ");
        scanf("%d",(ptrArray + i)); //scanf logic for array loop
        
    }
    
    Average(ptrSize , ptrArray);
    
    return 0;
}

void Average(int* ptrSize , int* ptrArray){
    int total = 0;
    for(int i = 0; i < *ptrSize; i++){
        total += ptrArray[i];
        
    }
    
    printf("Average: %d\n", total / *ptrSize);  
}
