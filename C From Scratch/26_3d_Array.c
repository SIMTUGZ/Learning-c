#include<stdio.h>

int main(){

    //This is example of 3D Array[matrix][row][column]
    //lets think about it like this outside the box[] how many inside the box[] and how many things in the box[]
                         
                          /*
                                column
                           row {{{1,2,3}
                           row ,{1,2,3}                    
                           row ,{1,2,3}}} matrix the whole outside the circle

                           */;
    

    int Array3D[1][3][3] = {{{1,2,3},
                              {1,2,3},
                              {1,2,3}}};

    for(int i = 0; i < 1; i++){
        printf("Matrix %d:\n", i);
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                printf("%d ", Array3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
