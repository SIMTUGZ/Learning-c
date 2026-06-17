//TypeDef command this is use to add nametag in Data types
//You can still use basic datatype it just add optional nametag

//syntax of typedef : typedef existing_type new_name;

#include<stdio.h>

type char *String; // or we can just use string for data alocation using pointer
typedef char String1[100]; //this is String automatic in c
typedef int number;

int main(){

  number age = 10;

  printf("%d \n",age);

  String name;
    
    printf("Input name: ");
    scanf("%s",& *name);  //the data will go to string pointer
    
    printf("\n %s \n", name);
    printf("%p", name);  // this is the data location using pointer


  return 0;
}
