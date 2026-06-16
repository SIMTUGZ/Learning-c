#include<stdio.h>//THIS IS example of a calloc forfat the same as malloc or we call memory allocation
#include<stdlib.h>

int main(){
    
    int number = 0;
    
    printf("Input number: ");
    scanf("%d",&number);
    
    int* grade = calloc(number,sizeof(int)); //calloc logic  calloc(number of size pointer, how many bytes )
    
    if(grade == NULL){
        printf("Logic invalid calloc clear allocation fail \n");
        return 1;
    }
    
    for(int i = 0; i < number; i++){
        printf("Input grade: ");
        scanf("%d",&grade[i]);
    }
    
    for(int i = 0; i < number; i++){
        printf("%d ",grade[i]);
        
    }
    
    free(grade);
    grade = NULL;
    
    
    return 0;
}
