#include<stdio.h>
#include<math.h>

int main(){
    float R; // Radius
    float V,A;
    const float pi = 3.14159;

    printf("\n--Area and Volume of a Sphere--");
    printf("Input radius: ");
    scanf("%f",&R);

    A = (4*pi) * pow(R,2); //Always multiply
    V = ((4.0/3.0) * pi) * pow(R,3); //Always multiply
    
    printf("The Area of the of the Sphere is %.2f \n",A);
    printf("The Volume of the of the Sphere is %.2f \n",V);

    return 0;
}