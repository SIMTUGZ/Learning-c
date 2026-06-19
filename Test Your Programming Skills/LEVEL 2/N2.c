#include<stdio.h>

int main(){
    float A,B,H;
    //Aria Base Height;
    float P,a,b,c;
    //Perimeter  side a side b side c
    printf("--Aria of the triangle-- \n");
    printf("Input Base: ");
    scanf("%f",&B);
    printf("Input height: ");
    scanf("%f",&H);
    A = (1.0/2.0) * (B * H); // Remmember to add zero if you use float example 1.0/2.0
    
    /*
    The problem is integer division. In C, when you divide two integers 
    (1/2), the result is an integer, which is 0. So A becomes 0 * (B * H), which is always 0.
    */

    printf("\n--Perimeter of the triangle-- \n");
    printf("Input A: ");
    scanf("%f",&a);
    printf("Input B: ");
    scanf("%f",&b);
    printf("Input C: ");
    scanf("%f",&c);

   
    P = a + b + c;

    printf("The Area of the triangle is %.2f \n",A);
    printf("The Perimeter of the triangle is %.2f \n",P);
    


    return 0;
}
