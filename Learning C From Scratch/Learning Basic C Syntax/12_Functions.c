//Funcion in c 
// A function is a reusable block of code.
#include<stdio.h>
#include<string.h>

 //Funcion (parameters)
    /*
  Parameters must have a data type.
  Parameter names can be changed,
  as long as their data types match
  the arguments passed to the function.
  */
    void Age(int age,char name[]){ 
        
        printf("Your age is %s \n",name);
        printf("Your age is %d \n",age);
        
    }

int main(){
    
    int age;
    char name[40];
    
    printf("Input age: ");
    scanf("%d",&age);
    
    getchar();
    printf("Input name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    
    Age(age,name); // we can re use the code again and again 
    Age(age,name); // inside of the Age is the arguments this is the data that will be send to the funcion
    
    
    return 0;
}
