#include<stdio.h>

int main(){

    int L , W, A;
    //Length Width Area


    printf("Area of the Rectangle \n");
    printf("Input the Length: ");
    scanf("%d",&L);

    printf("Input the Width: ");
    scanf("%d",&W);

    // Reactangle Area formula
    A = L *  W ;

    printf("The Area of the rectangle is %d",A);

    return 0;
}
