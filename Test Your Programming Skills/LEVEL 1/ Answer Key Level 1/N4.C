#include<stdio.h>
#include<math.h>

//Solving the Distace of two points

int main(){
    float X1, X2, Y1, Y2; 
    float C;
    printf("Input X1: ");
    scanf("%f",&X1);
    printf("Input Y1: ");
    scanf("%f",&Y1);
    printf("Input X2: ");
    scanf("%f",&X2);
    printf("Input Y2: ");
    scanf("%f",&Y2);

    C = sqrt(pow(X2 - X1,2) + pow(Y2 - Y1,2));

    printf("The Distance of two points is %.",C);

    return 0;
}