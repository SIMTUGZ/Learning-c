#include <stdio.h>

int main() {

    float C, F;
    //Celsius Fahrenheit

    printf("Input Celsius: ");
    scanf("%f",&C);

    F = (C * 1.8)+32 ;

    printf("%.2f Celsius is %.2f Fahrenheit \n",C,F);

    return 0;
}
