#include<stdio.h>

int main(){
    
    int blocks, rows, cols;
    
    // 1. Get the dimensions from the user
    printf("Enter number of matrices (blocks): ");
    scanf("%d", &blocks);
    
    printf("Enter number of rows for each matrix: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns for each matrix: ");
    scanf("%d", &cols);
    
    printf("\n--- Starting Data Input (%dx%dx%d) ---\n\n", blocks, rows, cols);
    
    // 2. Declare the 3D array using the user's dimensions
    int arr[blocks][rows][cols];
    
    // 3. Input loop adjusted to use the user's variables
    for(int i = 0; i < blocks; i++){
        for(int j = 0; j < rows; j++){
            for(int k = 0; k < cols; k++){
                printf("Input number[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    printf("--- Displaying the Output ---\n\n");
    
    // 4. Output loop adjusted to use the user's variables
    for(int i = 0; i < blocks; i++){
        printf("Matrix %d:\n", i + 1); // Optional: makes it clearer which block is printing
        for(int j = 0; j < rows; j++){
            for(int k = 0; k < cols; k++){
                // Added a space " " so numbers don't bunch up together (e.g., 1 and 2 looking like 12)
                printf("%d ", arr[i][j][k]); 
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
