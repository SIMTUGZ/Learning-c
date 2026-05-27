//Format Specifiers 

#include <stdio.h>
#include <stdbool.h> //this is use for boolean operator

int main(){
   
   int age = 19;                    //4 bit
   float GPA = 3.0;                 //4 bit
   double Pi = 3.14159;             //8 bit
   bool isTrue = True;              //1 bit
   char ch = 'c';                   //1 bit
   char name[] = "Jersim Tugonon";  // depends
   void                             // void 
   
   printf("Age: %d "age);      // %d int 
   printf("GPA: %f "GPA);      // %f float
   printf("Pi: %lf ",Pi);      // %lf double or long float
   // Bool this is commonly use in condition statement like if or loop
   printf("ch: %c", ch);       // %c char
   printf("string %s ", name)  // this is for string 
   // this is use commonly in funcion void 
   
   return 0;
}