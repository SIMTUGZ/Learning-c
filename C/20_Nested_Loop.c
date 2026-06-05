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

    for(int i = 0; i < c; i++){//column cycle \n
        for(int j = 0; j < r ; j++){ //row print 0123456789
            //the logic of nested loop the iner part will be exicuted first and the outer layer will be exicuted and if the condition is ok it will return back to the inner loop
                                     
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*

#include<stdio.h>

int main(){

    ////Mini Multiplication table using Nested For Loop////

    for(int i = 1; i  <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d * %d = %d \n",i , j ,(i * j));
        }
        printf("\n");
    }
    

    return 0;
}

*/




