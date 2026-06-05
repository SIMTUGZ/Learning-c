#include<stdio.h>

// In a nested loop, the inner loop executes completely
// for each iteration of the outer loop. After the inner
// loop finishes, control returns to the outer loop for
// the next iteration.

int main(){

    int c, r;

    printf("Input number of column: ");
    scanf("%d",&c);

    printf("Input number of radius: ");
    scanf("%d",&r);

    for(int i = 0; i < c; i++){//
        for(int j = 0; j < r ; j++){ //the logic of nested loop the iner part will be exicuted first and the outer layer will be exicuted and if the condition is ok it will return back to the inner loop
                                     
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
