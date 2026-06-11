//User Input 

#include <stdio.h>
#include <string.h> // this is use for string 

int main() {
    
    int age;
    char name[50];
    
    printf("Input age: ");
    scanf("%d",&age);
    
    getchar(); // this is use to take the new line
    printf("Input name: ");
    fgets(name,sizeof(name),stdin); // this fgets use to take whole string unlike scanf it will take only one line of text
    name[strcspn(name,"\n")] = '\0'; //this will remove the new line so it will not skip the code
    
    //fgets means funcion get string
    //strcspn() means string complementary span  it look for the character we want to find ex: VarName[strcspn(VarName,"\n")] = '\0'; 
    //strlen() means string lents it count how many string we have ex: VarName[strlen(VarName) -1] = '\0';
    
    printf("Age: %d \n",age);
    printf("Name: %s \n",name);
    
    return 0;
}

