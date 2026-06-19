#include<stdio.h>

int main(){
    
    int idNumber = 0;
    float workHours = 0;
    float salary = 0;
    
    printf("Input ID Number: ");
    scanf("%d",&idNumber);
    printf("Input work hours: ");
    scanf("%f",&workHours);
    printf("Input salary: ");
    scanf("%f",&salary);
    
    printf("Employees ID:  %d \n",idNumber);
    printf("Salary = Php %.2f",(workHours * salary) * 31);
    
    
    
    return 0;
}
