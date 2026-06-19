#include <stdio.h>


int main(){

    float a,b;//Angle
    float C; // Missing Angle

    printf("--Angle of a Triangle-- \n"); //the two are given and the last one is not
    printf("Angle A: ");
    scanf("%f",&a);
    printf("Angle B: ");
    scanf("%f",&b);

    C = 180 -(a+b); // the furmula 180 degree - (a+b);

    printf("The angle of the triangle is %.2f \n",C);
    return 0;
}
