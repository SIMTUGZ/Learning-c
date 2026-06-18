#include <stdio.h>
#include <string.h>

int main(){

    char name[30],CY[30]; //CourseYear
    char AD[30]; // Address
    int CN; // Contact Number:
    

    printf("Input name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)- 1] = '\0'; // or name[strcspn(name,"\n")] = '\0';

    printf("Input program and Year: ");
    fgets(CY,sizeof(CY),stdin);
    CY[strcspn(CY,"\n")] = '\0'; // or CY[strlen(CY)- 1] = '\0'; 

    printf("Input Contact Number: ");
    scanf("%d",&CN);

    getchar();
    printf("Input Address: ");
    fgets(AD,sizeof(AD),stdin);
    AD[strlen(AD)-1] = '\0'; // or AD[strlen(AD)- 1] = '\0'; 

    printf("\nName: %s \n",name);
    printf("Program and Year: %s \n",CY);
    printf("Contact Number: %d \n",CN);
    printf("Address: %s \n",AD);



    return 0;
}