#include<stdio.h>
#include<stdlib.h>


// realloc() = Reallocation.
    //                    Resize previously allocated memory
    //                    realloc(ptr, bytes)


int main(){
    int number = 0;
    printf("Input number: ");
    scanf("%d",&number);
    
    int* score = malloc(number * sizeof(char));
    
    if(score == NULL){
        printf("Memory Allocation Fail \n");
        return 1;
    }
    
    for(int i = 0; i < number; i++){
        printf("Input game score: ");
        scanf("%d",&score[i]);
    }
    
    int newNumber = 0;
    
    printf("Input updated number: ");
    scanf("%d",&newNumber);
    
    int* temp = realloc(score, number * sizeof(int)); //this is how you use re allocation  to update or to reset all of the data you have in the pointer
    //realloc is temporary use of data like malloc and clloc
    
    if(temp == NULL){
        printf("Memory Allocation Fail \n");
        return 1;
    }else{
        score = temp;
        temp = NULL;
        
        for(int i = number ; i < newNumber; i++){
            printf("Input game score: ");
            scanf("%d",&score[i]);
        }
        
        for(int i = 0 ; i < newNumber; i++){
            printf("%d ",score[i]);
        }
    }
    
    free(score);
    score = NULL;
    
    return 0;
}
