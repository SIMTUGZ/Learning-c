#include<stdio.h>

int main(){

    int Num1, Num2;
    //Simple  Calculator
    printf("Input First number: ");
    scanf("%d",&Num1);
    printf("Input Second number: ");
    scanf("%d",&Num2);

    printf("%d + %d = %d \n",Num1,Num2,(Num1 + Num2)); // We cand add another data by adding a parantisis ()
    printf("%d - %d = %d \n",Num1,Num2,(Num1 - Num2));
    printf("%d * %d = %d \n",Num1,Num2,(Num1 * Num2));
    printf("%d / %d = %d \n",Num1,Num2,(Num1 / Num2));
    printf("%d %% %d = %d \n",Num1,Num2,(Num1 % Num2)); // if you want to add a % this you need to add double %%

    int num;
    printf("\nInput number: ");
    scanf("%d",&num);

    printf("Increment %d \n",(++num)); //We can do this num++ or num--
    printf("Decrement %d \n",(--num)); // the diference is the way it exicute the code 




    return 0;
}