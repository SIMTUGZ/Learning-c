// This is example of 3D Array input

#include<stdio.h>

int main(){

    // This is a 3D array
    int arr[2][2][3]; // depth, row and column

    // input values using nested loops
    for(int k = 0; k < 2; k++){ //box
        for(int i = 0; i < 2; i++){ //row
            for(int j = 0; j < 3; j++){ //collumn
                printf("Input arr[%d][%d][%d]: ", k, i, j);
                scanf("%d", &arr[k][i][j]);
            }
        }
    }

    // print values using nested loops
    for(int k = 0; k < 2; k++){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ", arr[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
