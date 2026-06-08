//This is example of multiple input of 2d Array

#include<stdio.h>

int main(){

    //This is Array a 2d array 
    int arr[2][4]; //row and collomn

    //the format of multiInputArray
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("Input array[%d][%d]: ",i,j);
            scanf("%d",& arr[i][j]);
            
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("%d",arr[i][j]);
            
        }
        printf("\n");
    }
    
    
    
    return 0;
}
