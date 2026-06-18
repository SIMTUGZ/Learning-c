#include<stdio.h>
#include<math.h>

int main(){
    const float pi = 3.1415;
    float A,R;
    float C;   //float D; this is the diameter if you want to ask for the diameter
    printf("--Aria of a Circle--\n");
    printf("Input Radius: ");
    scanf("%f",&R);

    A = pi * pow(R,2);

    /*printf("--Circumference of a Circle--\n");   //this one is to ask for the diameter
    printf("Input Diameter: ");
    scanf("%f",&D);
    C = pi * D;
    */
    
   C = 2 * pi * R; // insted of asking the diameter we can just use this formula

    printf("The area of the circle is %f \n",A);
    printf("The Circumference of the circle is %f \n",C);

    return 0;
}